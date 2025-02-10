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
    MenuItem menu[10]; // array to store menu items
    int itemCount;  //track the number of items in the bakery
    int maxItems;   //max number of items a bakery can have

public:
    Bakery() {          // Default Constructor
        name = "";
        itemCount = 0;
    }

    Bakery (string bakeryName) {    // Parameterized Constructor
        name = bakeryName;
        itemCount = 0;
    }

    Bakery (string bakeryName, int maxItems) {    // Parameterized Constructor
        name = bakeryName;
        itemCount = 0;
        this->maxItems = maxItems;
    }

    Bakery(Bakery& obj) {
        this->name = obj.name + " on wheels";
        this->itemCount = obj.itemCount;
        for (int i = 0; i < obj.itemCount; i++) {
            this->menu[i] = obj.menu[i];
        }
        this->maxItems = obj.maxItems;
    }

    void addMenuItem(string itemName, double itemPrice) {
        if (itemCount >= maxItems) {
            cout << "Menu is full. Cannot add " << itemName << ".\n";
            return;
        }

        // struct MenuItem item;
        // item.name = itemName;
        // item.price = itemPrice;

        menu[itemCount++] = {itemName, itemPrice};
        cout << itemName << " added to the menu at Rs." << itemPrice << ".\n";
    }

    void removeItem(string itemName) {
        bool found = false;
        for (int i = 0; i < itemCount; i++) {
            if (menu[i].name == itemName) {
                found = true;
                for(int j = i; j < itemCount - 1; j++) {
                    menu[j] = menu[j+1];
                }
                --itemCount;
                cout << itemName << " removed from the menu." << endl;
                break;
            }
        }

        if(!found) {
            cout << itemName << " not found in the menu." << endl;
        }
    }

    void displayMenu() {
        if (itemCount == 0) {
            cout << "The menu is currently empty." << endl;
        } else {
            cout  << "\n" << name << " Bakery Menu: " << endl;
            for (int i = 0; i < itemCount; i++) {
                cout << "- " << menu[i].name << ": Rs." << menu[i].price << endl;
            }
        }
    }

    void getPrice(string itemName) {
        for (int i = 0; i < itemCount; i++) {
            if (menu[i].name == itemName) {
                cout << "Price of " << menu[i].name << ": Rs." << menu[i].price << endl;
                return;
            }
        }
        cout << itemName << " not found." << endl;
    }

};


int main() {
    Bakery myBakery("Sweet Treats");

    // myBakery.openNewBakery("Sweet Treats");
    myBakery.addMenuItem("Cookies", 100);
    myBakery.addMenuItem("Toast", 50);
    myBakery.addMenuItem("Bread", 30);
    
    // myBakery.displayMenu();

    // myBakery.addMenuItem("Muffin", 30);
    // myBakery.getPrice("Toast");
    // myBakery.removeItem("Toast");

    Bakery bakery_on_wheels(myBakery);

    bakery_on_wheels.displayMenu();

    return 0;
}

/*
Constructor:
    - A special method that invokes automatically when a new object is created.

Rules:
    1) A Constructor should never have a return type
    2) The name of the constructor should be as same as the class name

Types of Constructor:
    a) Default Constructor (non-parameterized)
    b) Parameterized Constructor
    c) Copy Constructor
*/