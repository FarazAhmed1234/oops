#include <iostream>
#include <string>
using namespace std;

class Pizza {
public:
    int choice, sizeChoice, orderNumber, flavorChoice;
    string toppings[5];
    string choice_bill;
    int pizzaFlavors[10]; // Array to store pizza flavors
    int pizzaSizes[10]; // Array to store pizza sizes
    int totalCost = 0; // Variable to store total cost

    void menu_details() {
        cout << "-------------------------------- Menu Details -------------------------------- " << endl;
        cout << "  Pizza Flavor                        Prices Of Pizza       \n" << endl;
        cout << "      Pizza Flavor      |      Small Pizza      |      Medium Pizza      |      Large Pizza      " << endl;
        cout << "------------------------------------------------------------------------------------------------ " << endl;
        cout << "      Margherita        |       450 Rs          |        550 Rs          |        660 Rs         " << endl;
        cout << "------------------------------------------------------------------------------------------------ " << endl;
        cout << "      Pepperoni         |       450 Rs          |        550 Rs          |        670 Rs         " << endl;
        cout << "------------------------------------------------------------------------------------------------ " << endl;
        cout << "      Veggie            |       430 Rs          |        530 Rs          |        600 Rs         " << endl;
        cout << "------------------------------------------------------------------------------------------------ " << endl;
        cout << "      BBQ Chicken       |       500 RS          |        600 Rs          |        690 Rs         " << endl;
    }

    void display_menu() {
        cout << "----------------------------- Welcome To Faraz Pizza Shop -----------------------------" << endl;
        cout << "Press 1 To Order." << endl;
        cout << "Press 2 To Menu Details." << endl;
        cout << "Press 3 To Exit." << endl;
    }

    void new_choice_size() {
        cout << "\nChoose pizza size:\n" << endl;
        cout << "Press 1 for Small Pizza " << endl;
        cout << "Press 2 for Medium Pizza" << endl;
        cout << "Press 3 for Large Pizza" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> sizeChoice;
    }

    void select_toppings() {
        string toppingChoice;
        int i = 0;
        cout << "\nChoose toppings (type 'done' when finished, max 5 toppings):\n" << endl;
        cout << "1. Olives\n2. Mushrooms\n3. Onions\n4. Green Peppers\n5. Extra Cheese" << endl;

        while (i < 5) {
            cout << "Enter a topping or type 'done' to finish: ";
            cin >> toppingChoice;

            if (toppingChoice == "done") {
                break;
            } else {
                toppings[i] = toppingChoice; // Add topping to array
                i++;
            }
        }
    }

    void Choice() {
        while (true) {
            cout << "Enter your choice: ";
            cin >> choice;
            system("cls");
            switch (choice) {
                case 1: {
                    cout << "----------------------------- Welcome To Pizza Order Menu -----------------------------" << endl;
                    cout << "Enter the Number of Pizza Orders: ";
                    cin >> orderNumber;

                    for (int i = 0; i < orderNumber; i++) {
                        cout << "\n--- Pizza " << i + 1 << " Order Summary ---" << endl;

                        cout << "\nChoose pizza flavor:\n" << endl;
                        cout << "Press 1 for Margherita" << endl;
                        cout << "Press 2 for Pepperoni" << endl;
                        cout << "Press 3 for BBQ Chicken" << endl;
                        cout << "Press 4 for Veggie" << endl;
                        cout << "Enter your choice (1-4): ";
                        cin >> flavorChoice;

                        switch (flavorChoice) {
                            case 1:
                                pizzaFlavors[i] = 1; // Store flavor choice
                                cout << "\nYou selected Margherita flavor " << endl;
                                break;
                            case 2:
                                pizzaFlavors[i] = 2;
                                cout << "\nYou selected Pepperoni flavor " << endl;
                                break;
                            case 3:
                                pizzaFlavors[i] = 3;
                                cout << "\nYou selected BBQ Chicken flavor " << endl;
                                break;
                            case 4:
                                pizzaFlavors[i] = 4;
                                cout << "\nYou selected Veggie flavor " << endl;
                                break;
                            default:
                                cout << "Invalid flavor choice! Please try again." << endl;
                                continue; // Skip to next iteration for valid input
                        }

                        new_choice_size();
                        pizzaSizes[i] = sizeChoice; // Store size choice
                        select_toppings();
                        
                        // Calculate cost based on flavor and size
                        int cost = 0;
                        if (flavorChoice == 1) cost = (sizeChoice == 1 ? 450 : (sizeChoice == 2 ? 550 : 660));
                        else if (flavorChoice == 2) cost = (sizeChoice == 1 ? 450 : (sizeChoice == 2 ? 550 : 670));
                        else if (flavorChoice == 3) cost = (sizeChoice == 1 ? 500 : (sizeChoice == 2 ? 600 : 690));
                        else if (flavorChoice == 4) cost = (sizeChoice == 1 ? 430 : (sizeChoice == 2 ? 530 : 600));

                        totalCost += cost; // Add to total cost

                        // Display toppings
                        cout << "Toppings: ";
                        for (int j = 0; j < 5; j++) {
                            if (!toppings[j].empty()) {
                                cout << toppings[j] << " ";
                            }
                        }
                        cout << endl;

                        // Clear toppings for next order
                        for (int j = 0; j < 5; j++) {
                            toppings[j].clear(); // Reset each topping to an empty string
                        }
                    }
                    break;
                }
                case 2:
                    menu_details();
                    cout << "------------------------------------------------------------------------------------------------\n " << endl;
                    break;
                case 3:
                    cout << "GOODBYE! EXITING..." << endl;
                    exit(0);
                default:
                    cout << "Please enter either 1, 2, or 3!" << endl;
                    break;
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
            // Toppings
            for (int j = 0; j < 5 && !toppings[j].empty(); j++) {
                cout << toppings[j] << " ";
            }
            cout << endl;
        }
        cout << "-----------------------------\n";
        cout << "Total Cost: " << totalCost << " Rs\n";
        cout << "-----------------------------\n";
    }
};

int main() {
    Pizza obj_pizza;
    obj_pizza.display_menu();
    obj_pizza.Choice();
    obj_pizza.bill_display();

    return 0;
}

