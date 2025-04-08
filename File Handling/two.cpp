#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    char name[50];
    int age;
};

void writeBinFile(const Person* person) {
    ofstream of("person.bin", ios::binary);
    if (!of) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    of.write((const char *)person, sizeof(*person));
    of.close();

    cout << "Struct written in file." << endl;
}

Person readBinFile() {
    ifstream inf("person.bin", ios::binary);
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

void display(Person person) {
    cout << "Person Details:" << endl;
    cout << "Person name: " << person.name << endl;
    cout << "Person age: " << person.age << endl;
    cout << "-------------------------------" << endl;
}


int main() {
    Person p = {"John Doe", 30};
    
    // writeBinFile(&p);
    p = readBinFile();
    display(p);

    return 0;
}

/*
take structure array of size 10. person will input how many persons he/she have to store and the data will be entered by the person only.

then make binary files, each stores only one person.

if i want to get the person details i will use getdetails method with position as the parameter. only the required binary files should get loaded.

*/