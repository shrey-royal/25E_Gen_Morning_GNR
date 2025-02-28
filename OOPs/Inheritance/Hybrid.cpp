#include<iostream>
using namespace std;

// Base Class
class Food {
public:
    void category() {
        cout << "This is a type of food." << endl;
    }
};

// Intermediate Class 
class Fruit : public Food {
public:
    void type() {
        cout << "This is a type of fruit." << endl;
    }
};

// Intermediate Class
class Vegetable : public Food {
public:
    void type() {
        cout << "This is a type of vegetable." << endl;
    }
};

// Child Class
class Salad : public Fruit, public Vegetable {
public:
    void dish() {
        cout << "This is a healthy fruit and vegetable salad." << endl;
    }
};

int main() {
    Salad fruitVegSalad;

    fruitVegSalad.Fruit::category();
    fruitVegSalad.Vegetable::type();
    fruitVegSalad.Fruit::type();

    fruitVegSalad.dish();

    return 0;
}