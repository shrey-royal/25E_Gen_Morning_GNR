#include<iostream>
using namespace std;

class Chaat {
public:
    void describe() {
        cout << "Chaat is a popular Indian street food, known for its spicy, tangy, and savory flavors." << endl;
    }
};

class PaniPuri : public Chaat {
public:
    void ingredients() {
        cout << "Pani Puri consists of crispy puris, spicy tangy water, and flavorful fillings." << endl;
    }
};

class SpecialPaniPuri : public PaniPuri {
public:
    void variety() {
        cout << "Vyoma & Diya love trying different types of Pani Puri like Hing Pani, Meetha Pani, and Teekha Pani!" << endl;
    }
};

int main() {
    SpecialPaniPuri snackTime;

    cout << "Vyoma and Diya visit a famous chaat stall!" << endl;
    snackTime.describe();
    snackTime.ingredients();
    snackTime.variety();



    return 0;
}