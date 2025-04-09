#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Person {
    char name[50];
    int age;
};

void writeBinFile(const Person& person, int index) {
    string filename = "person_" + to_string(index) + ".bin";
    ofstream of(filename, ios::binary);
    if (!of) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    of.write((const char *)&person, sizeof(person));
    of.close();

    cout << "Struct written in file." << endl;
}

Person readBinFile(int index) {
    string filename = "person_" + to_string(index) + ".bin";
    ifstream inf(filename, ios::binary);
    if (!inf) {
        cerr << "Error opening file for reading!" << endl;
        exit(1);
    }

    Person p;
    inf.read((char *)&p, sizeof(p));
    inf.close();

    cout << "Struct read from file." << endl;
    return p;
}

void display(const Person& person) {
    cout << "Person Details:" << endl;
    cout << "Person name: " << person.name << endl;
    cout << "Person age: " << person.age << endl;
    cout << "-------------------------------" << endl;
}

void getDetails(int index) {
    Person p = readBinFile(index);
    display(p);
}


int main() {
    const int MAX = 10;
    Person people[MAX];
    int n;

    cout << "How many persons do you want to store (max 10)?\n-> ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cerr << "Invalid number of persons." << endl;
        return 1;
    }
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter the name of person " << i+1 << ": ";
        cin.getline(people[i].name, 50);

        cout << "Enter the age of person " << i+1 << ": ";
        cin >> people[i].age;
        cin.ignore();

        writeBinFile(people[i], i);
    }

    int choice;
    cout << "\nEnter position (0 to " << n - 1 << ") of the person to get details: ";
    cin >> choice;

    if (choice >= 0 && choice < n) {
        getDetails(choice);
    } else {
        cerr << "Invalid position entered." << endl;
    }

    return 0;
}