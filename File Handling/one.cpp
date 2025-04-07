#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void writeFile(string filename) {
    ofstream fout;

    fout.open(filename, ios::out);
    if (fout.fail()) {
        cout << "Failed to open " << filename << " for writing!" << endl;
        return;
    }

    string data;

    cout << "Enter the data (~ to terminate input): " << endl;
    cin.ignore();
    getline(cin, data);
    while (data != "~") {
        fout << data << endl;
        getline(cin, data);
    }
    fout.close();
    cout << "File written successfully!" << endl;
}

void readFile(string filename) {
    ifstream fin;

    fin.open(filename, ios::in);
    if (fin.fail()) {
        cout << "Failed to open " << filename << " for reading!" << endl;
        return;
    }

    string data;
    cout << "File contents: " << endl;
    while(getline(fin, data)) {
        cout << data << endl;
    }
    fin.close();
    cout << "File read successfully!" << endl;
}

int main() {
    string fn;

    cout << "Enter filename: ";
    cin >> fn;
    fn.append(".txt");

    // writeFile(fn);
    readFile(fn);

    return 0;
}

/*
Student Data:
    - rollNo
    - name
    - marks

Store atleast 5 students into the file and print them.
*/