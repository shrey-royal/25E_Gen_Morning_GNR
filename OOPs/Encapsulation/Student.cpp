#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    string name;
    float marks;

public:
    Student(int rollno, string name, float marks) {
        this->rollno = rollno;
        this->name = name;
        this->marks = marks;
    }

    //getter method
    int getRollNo() {
        return rollno;
    }

    //setter method
    void setRollNo(int newRollNo) {
        this->rollno = newRollNo;
    }

    string getName() {
        return name;
    }

    void setName(string newName) {
        name = newName;
    }

    float getMarks() {
        return marks;
    }

    void setMarks(float newMarks) {
        marks = newMarks;
    }

    void display() {
        cout << "Roll No.: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};


int main() {
    Student s(101, "Jasprit", 67);

    // s.display();
    cout << s.getRollNo() << ", " << s.getName() << ", " << s.getMarks() << endl;
    s.setName("Jasmit");
    cout << s.getRollNo() << ", " << s.getName() << ", " << s.getMarks() << endl;

    return 0;
}