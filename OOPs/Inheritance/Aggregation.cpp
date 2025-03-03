#include<iostream>
using namespace std;

class Pilot;    // Predeclaration of a class

class Airline {
private:
    string name;
    Pilot* pilot;   // Aggregation: Airline HAS-A pilot, but does not own it

public:
    Airline(string name) : name(name), pilot(nullptr) {}
    Airline(string name, Pilot* pilot) : name(name), pilot(pilot) {}

    void showDetails();
};

class Pilot {
private:
    string pilotName;
public:
    Pilot(string name) : pilotName(name) {}

    // getter method
    string getName() {
        return pilotName;
    }
};

void Airline::showDetails() {
    cout << "Airline: " << name << "\n";
    cout << "Pilot: " << (pilot ? pilot->getName() : "No Pilot Assigned") << endl;
}

int main() {
    Pilot p1("John Doe");

    Airline airline("SkyHigh Airlines", &p1);

    airline.showDetails();

    return 0;
}