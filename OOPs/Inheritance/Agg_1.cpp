#include<iostream>
using namespace std;

class FoodItem {
public:
    string name;
    double price;

    FoodItem() : name(""), price(0.0) {}
    FoodItem(string name, double price) : name(name), price(price) {}

    void getFoodItem() {
        cout << "Name: " << name << ", Price: Rs." << price << endl;
    }
};

class Menu {
private:
    FoodItem items[10]; // Aggregation
    int itemCount = 0;

public:
    Menu() : itemCount(0) {}

    void addFoodItem(string name, double price) {
        if (itemCount < 10) {
            items[itemCount++] = FoodItem(name, price);
        } else {
            cout << "Menu is full!" << endl;
        }
    }

    void displayMenu() {
        if (itemCount == 0) {
            cout << "No food items available." << endl;
            return;
        }
        cout << "\n-------------Menu-------------\n" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i+1 << ". ";
            items[i].getFoodItem();
        }
    }

    void updateFoodItem(int index, string newName, double newPrice) {
        if (index >= 0 && index < itemCount) {
            items[index].name = newName;
            items[index].price = newPrice;
            cout << "Food item updated successfully!" << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }

    void deleteFoodItem(int index) {
        if (index >= 0 && index < itemCount) {
            for (int i = index; i < itemCount-1; i++) {
                items[i] = items[i+1];
            }
            itemCount--;
            cout << "Food item deleted successfully!" << endl;
        } else {
            cout << "Invalid index!" << endl;
        }
    }
};

int main() {
    Menu menu;
    int choice;
    string name;
    double price;
    int index;

    do {
        cout << "\n1. Add Food Item";
        cout << "\n2. Display Menu";
        cout << "\n3. Update Food Item";
        cout << "\n4. Delete Food Item";
        cout << "\n0. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter food name: ";
                getline(cin, name);
                cout << "Enter food price: ";
                cin >> price;
                menu.addFoodItem(name, price);
                break;

            case 2:
                menu.displayMenu();
                break;

            case 3:
                cout << "Enter index of food item to update: ";
                cin >> index;
                cin.ignore();
                cout << "Enter new name: ";
                getline(cin, name);
                cout << "Enter new price: ";
                cin >> price;
                menu.updateFoodItem(index - 1, name, price);
                break;

            case 4:
                cout << "Enter index of food item to delete: ";
                cin >> index;
                menu.deleteFoodItem(index - 1);
                break;

            case 0:
                cout << "Exiting..." << endl;    
                break;

            default:
                cout << "Invalid choice! please try again..." << endl;
        }
    } while(choice != 0);

    return 0;
}