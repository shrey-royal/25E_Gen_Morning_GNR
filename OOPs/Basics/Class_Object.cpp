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

public:
    void openNewBakery(string bakeryName) {   //Method
        name = bakeryName;
        itemCount = 0;
    }

    void addMenuItem(string itemName, double itemPrice) {
        if (itemCount >= 10) {
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
            cout << "Bakery Menu: " << endl;
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
    Bakery myBakery;

    myBakery.openNewBakery("Sweet Treats");
    myBakery.addMenuItem("Cookies", 100);
    myBakery.addMenuItem("Toast", 50);
    myBakery.addMenuItem("Bread", 30);
    
    myBakery.displayMenu();

    // myBakery.addMenuItem("Muffin", 30);
    // myBakery.getPrice("Toast");
    // myBakery.removeItem("Toast");

    return 0;
}