#include<iostream>
#include<string>
using namespace std;

class Bakery {
private:    //access_modifiers
    struct MenuItem {
        string name;
        double price;
    };

    string name;    //bakery name
    MenuItem menu[2]; // array to store menu items
    int itemCount;  //track the number of items in the bakery

public:
    void openNewBakery(string bakeryName) {   //Method
        name = bakeryName;
        itemCount = 0;
    }

    void addMenuItem(string itemName, double itemPrice) {
        if (itemCount >= 2) {
            cout << "Menu is full. Cannot add " << itemName << ".\n";
            return;
        }

        // struct MenuItem item;
        // item.name = itemName;
        // item.price = itemPrice;

        menu[itemCount++] = {itemName, itemPrice};
        cout << itemName << " added to the menu at Rs." << itemPrice << ".\n";
    }

};


int main() {
    Bakery myBakery;

    myBakery.openNewBakery("Sweet Treats");
    myBakery.addMenuItem("Cookies", 100);
    myBakery.addMenuItem("Toast", 50);
    myBakery.addMenuItem("Bread", 30);

    return 0;
}