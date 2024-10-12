#include<iostream>
using namespace std;

class Calculations {
    public:
        // Function to get input values by reference
        void getdate(int &a, int &b) {
            cout << "Enter the first number: ";
            cin >> a;
            
            cout << "Enter the second number: ";
            cin >> b;
        }

        // Addition function
        int addition(int a, int b) {
            int add = a + b;
            cout << "Addition: " << add << endl;
            return add;
        }

        // Subtraction function
        int subtraction(int a, int b) {
            int sub = a - b;
            cout << "Subtraction: " << sub << endl;
            return sub;
        }

        // Multiplication function
        int multiplication(int a, int b) {
            int product = a * b;
            cout << "Multiplication: " << product << endl;
            return product;
        }

        // Division function
        float division(int a, int b) {
            if (b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            } else {
                float div = (float)a / b;
                cout << "Division: " << div << endl;
                return div;
            }
        }

        // Modulus function
        int modulus(int a, int b) {
            if (b == 0) {
                cout << "Error: Modulus by zero!" << endl;
                return 0;
            } else {
                int mod = a % b;
                cout << "Modulus: " << mod << endl;
                return mod;
            }
        }
};

int main() {
    Calculations calc;

    int a, b;

    // Get input values from the user
    calc.getdate(a, b);

    // Perform arithmetic operations
    calc.addition(a, b);
    calc.subtraction(a, b);
    calc.multiplication(a, b);
    calc.division(a, b);
    calc.modulus(a, b);

    return 0;
}

