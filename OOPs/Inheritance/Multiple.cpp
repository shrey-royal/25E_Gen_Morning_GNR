#include<iostream>
using namespace std;

class Sev {
public:
    void crispy() {
        cout << "Sev is crispy and adds crunch to chaat!" << endl;
    }
};

class PuffedRice {
public:
    void lightTexture() {
        cout << "Puffed rice is light and airy, making chaat delicious." << endl;
    }
};

class BhelPuri : public Sev, public PuffedRice {
public:
    void mixIngredients() {
        cout << "Vyoma and Diya mix sev, puffed rice, chutneys, and spices to prepare tasty Bhel Puri!" << endl;
    }
};

int main() {
    BhelPuri eveningSnack;

    cout << "Vyoma and Diya visit a Bhel Puri Stall!" << endl;
    eveningSnack.crispy();
    eveningSnack.lightTexture();
    eveningSnack.mixIngredients();

    return 0;
}