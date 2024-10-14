#include <iostream>
#include <string>
using namespace std;

class Pizza {
public:
    int choice, sizeChoice, orderNumber, flavorChoice;
    string toppings[5][5]; // 2D array to store toppings for each order (max 5 toppings for each pizza)
    int pizzaSizes[5];     // Array to store the size of each pizza
    int pizzaFlavors[5];   // Array to store the flavor of each pizza
    int totalCost = 0;     // To keep track of the total bill

    void menu_details() {
        cout << "-------------------------------- Menu Details --------------------------------" << endl;
        cout << "  Pizza Flavor                        Prices Of Pizza\n" << endl;
        cout << "      Pizza Flavor      |      Small Pizza      |      Medium Pizza      |      Large Pizza" << endl;
        cout << "------------------------------------------------------------------------------------------------" << endl;
        cout << "      Margherita        |       450 Rs          |        550 Rs          |        660 Rs" << endl;
        cout << "      Pepperoni         |       450 Rs          |        550 Rs          |        670 Rs" << endl;
        cout << "      Veggie            |       430 Rs          |        530 Rs          |        600 Rs" << endl;
        cout << "      BBQ Chicken       |       500 Rs          |        600 Rs          |        690 Rs" << endl;
        cout << "\nToppings:\n1. Olives - 50 Rs\n2. Mushrooms - 40 Rs\n3. Onions - 30 Rs\n4. Green Peppers - 35 Rs\n5. Extra Cheese - 60 Rs\n";
        display_menu();
        Choice();
    }

    void display_menu() {
        cout << "----------------------------- Welcome To Faraz Pizza Shop -----------------------------" << endl;
        cout << "Press 1 To Order." << endl;
        cout << "Press 2 For Menu Details." << endl;
        cout << "Press 3 To Exit." << endl;
    }

    void new_choice_size(int index) {
        cout << "\nChoose pizza size:\n";
        cout << "Press 1 for Small Pizza" << endl;
        cout << "Press 2 for Medium Pizza" << endl;
        cout << "Press 3 for Large Pizza" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> sizeChoice;
        pizzaSizes[index] = sizeChoice; // Store the size choice
    }

    void select_toppings(int orderIndex) {
        string toppingChoice;
        int toppingCost = 0;
        int i = 0;
        cout << "\nChoose toppings (type 'done' when finished, max 5 toppings):\n";
        cout << "1. Olives (50 Rs)\n2. Mushrooms (40 Rs)\n3. Onions (30 Rs)\n4. Green Peppers (35 Rs)\n5. Extra Cheese (60 Rs)" << endl;

        while (i < 5) { // Limit toppings to 5
            cout << "Enter a topping number (1-5) or type 'done' to finish: ";
            cin >> toppingChoice;

            if (toppingChoice == "done") {
                break;
            } else {
                // Calculate cost based on the topping selected
                if (toppingChoice == "1") {
                    toppings[orderIndex][i] = "Olives";
                    toppingCost = 50;
                } else if (toppingChoice == "2") {
                    toppings[orderIndex][i] = "Mushrooms";
                    toppingCost = 40;
                } else if (toppingChoice == "3") {
                    toppings[orderIndex][i] = "Onions";
                    toppingCost = 30;
                } else if (toppingChoice == "4") {
                    toppings[orderIndex][i] = "Green Peppers";
                    toppingCost = 35;
                } else if (toppingChoice == "5") {
                    toppings[orderIndex][i] = "Extra Cheese";
                    toppingCost = 60;
                } else {
                    cout << "Invalid choice, please select a number between 1 and 5 or 'done'." << endl;
                    continue; // Skip this iteration if an invalid choice is made
                }

                totalCost += toppingCost; // Add topping cost to total
                i++;
            }
        }
    }

    void Choice() {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "----------------------------- Welcome To Pizza Order Menu -----------------------------" << endl;
            cout << "Enter the Number of Pizza Orders (up to 5): ";
            cin >> orderNumber;

            for (int i = 0; i < orderNumber; i++) {
                cout << "\n--- Pizza " << i + 1 << " Order Summary ---" << endl;
                cout << "\nChoose pizza flavor:\n";
                cout << "Press 1 for Margherita" << endl;
                cout << "Press 2 for Pepperoni" << endl;
                cout << "Press 3 for BBQ Chicken" << endl;
                cout << "Press 4 for Veggie" << endl;
                cout << "Enter your choice (1-4): ";
                cin >> flavorChoice;
                pizzaFlavors[i] = flavorChoice;

                switch (flavorChoice) {
                case 1:
                    cout << "\nYou selected Margherita flavor." << endl;
                    new_choice_size(i);
                    totalCost += (sizeChoice == 1 ? 450 : sizeChoice == 2 ? 550 : 660);
                    break;
                case 2:
                    cout << "\nYou selected Pepperoni flavor." << endl;
                    new_choice_size(i);
                    totalCost += (sizeChoice == 1 ? 450 : sizeChoice == 2 ? 550 : 670);
                    break;
                case 3:
                    cout << "\nYou selected BBQ Chicken flavor." << endl;
                    new_choice_size(i);
                    totalCost += (sizeChoice == 1 ? 500 : sizeChoice == 2 ? 600 : 690);
                    break;
                case 4:
                    cout << "\nYou selected Veggie flavor." << endl;
                    new_choice_size(i);
                    totalCost += (sizeChoice == 1 ? 430 : sizeChoice == 2 ? 530 : 600);
                    break;
                default:
                    cout << "Invalid flavor choice! Please try again." << endl;
                    i--; // Repeat the loop for invalid choice
                    continue;
                }

                select_toppings(i); // Call topping selection for this pizza order
            }
            break;
        }
        case 2:
            menu_details();
            break;
        case 3:
            cout << "GOODBYE! EXITING..." << endl;
            exit(0);
        default:
            cout << "Please enter either 1, 2, or 3!" << endl;
        }
    }

    void bill_print() {
        string choice_bill;
        while (true) {
            cout << "Do you want to view the menu again and add (yes/no)? " << endl;
            cout << "Enter your choice: ";
            cin >> choice_bill;

            if (choice_bill == "yes" || choice_bill == "Yes") {
                display_menu();
                Choice();
            } else if (choice_bill == "no" || choice_bill == "No") {
                bill_display();
                break; // Exit the loop after displaying the bill
            } else {
                cout << "Invalid choice! Please enter 'yes' or 'no'." << endl;
            }
        }
    }

    void bill_display() {
        cout << "-----------------------------\n";
        cout << "         PIZZA BILL          \n";
        cout << "-----------------------------\n";
        cout << "Quantity   |    Pizza Flavor            |  Pizza Size     |   Toppings" << endl;

        for (int i = 0; i < orderNumber; i++) {
            cout << "  " << i + 1 << "        | ";
            // Flavor
            if (pizzaFlavors[i] == 1) cout << "Margherita           ";
            else if (pizzaFlavors[i] == 2) cout << "Pepperoni            ";
            else if (pizzaFlavors[i] == 3) cout << "BBQ Chicken          ";
            else if (pizzaFlavors[i] == 4) cout << "Veggie               ";
            cout << "| ";
            // Size
            if (pizzaSizes[i] == 1) cout << "Small               ";
            else if (pizzaSizes[i] == 2) cout << "Medium              ";
            else if (pizzaSizes[i] == 3) cout << "Large               ";
            cout << "| ";

            // Display Toppings
            cout << "[ ";
            for (int j = 0; j < 5; j++) {
                if (!toppings[i][j].empty()) {
                    cout << toppings[i][j] << " ";
                }
            }
            cout << "]" << endl;
        }
        cout << "Total Amount: " << totalCost << " Rs" << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Pizza pizzaOrder;

        pizzaOrder.display_menu();
        pizzaOrder.Choice();
        pizzaOrder.bill_print();
    
    return 0;
}

