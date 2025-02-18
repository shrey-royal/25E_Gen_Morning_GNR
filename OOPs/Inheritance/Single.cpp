#include<iostream>
#include<iomanip>
using namespace std;

class Car {
public:
    string brand;
    string model;
    string color;
    double price;

    Car(string brand, string model, string color, double price) : brand(brand), model(model), color(color), price(price) {}

    void printCarDetails() {
        cout << "Car Details: " << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Color: " << color << endl;
        cout << "Price: " << fixed << setprecision(2) << price << endl;
    }
};

class SportsCar : public Car {
public:
    int seats;
    bool isTurboCharged;

    SportsCar(string brand, string model, string color, double price, int seats, bool isTurboCharged) : Car(brand, model, color, price) {
        this->seats = seats;
        this->isTurboCharged = isTurboCharged;
    }

    void printSportsCarDetails() {
        printCarDetails();
        cout << "\nSports Features: " << endl;
        cout << "Seats: " << seats << endl;
        cout << "Is engine Turbo Charged? -> " << (isTurboCharged ? "Yes" : "No") << endl;
    }
};

int main() {
    SportsCar car("Hyundai", "Creta Sports", "White", 2500000, 2, true);
    car.printSportsCarDetails();

    return 0;
}

/*
Problem Statement: Implementing a Food Laari System Using Single Inheritance

Scenario:  
Diyaben Chaat Bhandar is a famous street food Laari known for its variety of chaats. The owner wants to develop a basic system to manage their food items efficiently. The Laari sells general food items, but some of them are special chaats, which have additional unique features.

Objective:  
Design a C++ program that models a FoodItem class to represent general food items and a Chaat class that extends it using single inheritance. The program should demonstrate inheritance by adding extra attributes specific to chaats.

---

Problem Description:  
At Diyaben Chaat Bhandar, each Food Item has the following attributes:
- Name (e.g., Pani Puri, Dahi Puri, Samosa)
- Price (in INR)
- Category (e.g., Snack, Beverage, Sweet)

However, Chaat items have additional attributes:
- Spice Level (Low, Medium, High)
- Includes Curd? (Yes/No)

The system should allow:
1. Creation of a FoodItem class with common food attributes.
2. Extension of the FoodItem class into a specialized Chaat class that includes additional chaat-specific attributes.
3. A function to display both general and specific details of a chaat item.

---

Expected Output:
The program should create an instance of a Chaat item (e.g., "Dahi Puri"), initialize it with appropriate values, and display its details, including both general food item details and chaat-specific features.

*/