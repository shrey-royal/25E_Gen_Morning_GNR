#include <iostream>
using namespace std;

class Car {
private:
    int speed;
    string engineState;

public:
    Car() {
        speed = 0;
        engineState = "Off";
    }

    void startEngine() {
        engineState = "On";
        cout << "Engine started." << endl;
    }

    void stopEngine() {
        engineState = "Off";
        cout << "Engine stopped." << endl;
    }

    int getSpeed() {
        if (engineState == "On") return speed;
        return 0;
    }

    void setSpeed(int newSpeed) {
        if (engineState == "On" && newSpeed >= 0 && newSpeed <= 200) {
            speed = newSpeed;
            cout << "Speed set to " << speed << " km/h" << endl;
        } else {
            cout << "Cannot set speed. Make sure the engine is on and the speed is valid." << endl;
        }
    }
};

int main() {
    Car myCar;

    // myCar.speed = 50;

    myCar.startEngine();
    myCar.setSpeed(50);
    cout << "Current Speed: " << myCar.getSpeed() << " km/h" << endl;

    myCar.stopEngine();
    myCar.setSpeed(100);
    cout << "Current Speed: " << myCar.getSpeed() << " km/h" << endl;

    return 0;
}