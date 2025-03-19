#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void startEngine() {
        cout << "Starting the generic engine..." << endl;
    }
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting the car engine with a key..." << endl;
    }
};

class Truck : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting the truck engine with a button press..." << endl;
    }
};

int main() {
    Vehicle* vehicle = nullptr;
    
    vehicle = new Car();
    vehicle->startEngine();
    delete vehicle;
    
    vehicle = new Truck();
    vehicle->startEngine();
    delete vehicle; // null

    return 0;
}