#include <iostream>
#include <string>
using namespace std;

class Restaurant {
private:
    string menuItems[4] = {"Pizza", "Burger", "Coke", "Fries"};
    double menuPrices[4] = {8.99, 5.49, 1.99, 2.99};
    int menuQuantities[4] = {0, 0, 0, 0};
    double totalBill = 0.0;

public:
    void showMenu() {
        cout << "\n--- Menu ---\n";
        for (int i = 0; i < 4; ++i) {
            cout << i + 1 << ". " << menuItems[i] << " - $" << menuPrices[i] << "\n";
        }
    }

    void takeOrder() {
        int choice, qty;
        cout << "\nEnter the item number to order (1-4) or 0 to finish: ";
        while (true) {
            cin >> choice;
            if (choice == 0) break;
            if (choice < 1 || choice > 4) {
                cout << "Invalid choice. Try again: ";
                continue;
            }
            cout << "Enter quantity for " << menuItems[choice - 1] << ": ";
            cin >> qty;
            menuQuantities[choice - 1] += qty;
            totalBill += menuPrices[choice - 1] * qty;
            cout << "Item added! Order another or enter 0 to finish: ";
        }
    }

    void generateBill() {
        cout << "\n--- Final Bill ---\n";
        cout << "Item         Qty   Price   Total\n";
        cout << "--------------------------------\n";
        for (int i = 0; i < 4; ++i) {
            if (menuQuantities[i] > 0) {
                double itemTotal = menuPrices[i] * menuQuantities[i];
                cout << menuItems[i] << "         " << menuQuantities[i] << "     $" << menuPrices[i] << "    $" << itemTotal << "\n";
            }
        }
        cout << "--------------------------------\n";
        cout << "Total Bill: $" << totalBill << "\n";
    }
};

int main() {
    Restaurant rest;
    int choice;

    do {
        cout << "\n--- Welcome to the Restaurant ---\n";
        cout << "1. Show Menu\n";
        cout << "2. Take Order\n";
        cout << "3. Generate Final Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            rest.showMenu();
            break;
        case 2:
            rest.takeOrder();
            break;
        case 3:
            rest.generateBill();
            break;
        case 4:
            cout << "Thank you for visiting!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
