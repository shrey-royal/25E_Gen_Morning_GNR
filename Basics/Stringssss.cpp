#include<iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    // cin >> name;    //one word
    getline(cin, name); //whole line

    cout << "Your name is " << name << endl;

    // cout << "Length: " << name.length() << endl;
    // for (int i=0; i<name.length(); i++) {
    //     cout << name[i] << " ";
    // }

    //Advanced For Loop (for-each loop)
    for (char i : name) {
        cout << (int)i << endl;
    }
    

    return 0;
}