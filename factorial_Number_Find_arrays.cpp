#include <iostream>
using namespace std;
class Calculations {
public:
    // Function to calculate factorial of a number
    int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }

    // Function to print factorials of array values
    void printFactorials(int arr[], int size) {
        for (int i = 0; i < size; ++i) {
            cout << "Factorial of " << arr[i] << " is " << factorial(arr[i]) << endl;
        }
    }
};

int main() {
    Calculations calc;
    int arr[] = {2,3, 4, 5,6}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    calc.printFactorials(arr, size); // Print factorials of array values

    return 0;
}

