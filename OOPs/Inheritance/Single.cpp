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