#include <iostream>
using namespace std;

class Shape {
public:
    // pure virtual function (abstract)
    virtual void draw() = 0;

    void setColor(string color) {
        cout << "Setting color: " << color << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

int main() {
    // Shape s;

    // Square sq;
    // sq.draw();
    // sq.setColor("white");

    // Circle c;
    // c.draw();
    // c.setColor("red");

    Shape* s = nullptr;

    s = new Square();
    s->draw();
    s->setColor("blue");
    delete s;

    s = new Circle();
    s->draw();
    s->setColor("orange");
    delete s;
    
    return 0;
}