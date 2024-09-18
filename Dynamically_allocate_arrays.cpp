#include <iostream>
using namespace std;

int main() {
    int size;
    
    // Take input for the size of the arrays
    cout << "Enter the size of the arrays: ";
    cin >> size;
    
    // Dynamically allocate arrays
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    int* result = new int[size];
    
    // Take input for the first array elements
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr1[i];
    }
    
    // Take input for the second array elements
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr2[i];
    }
    
    // Multiply corresponding elements of both arrays and store in result array
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] * arr2[i];
    }
    
    // Print the result array
    cout << "The result of multiplying both arrays is: ";
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    

    return 0;
}
