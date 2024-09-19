    
#include <iostream>
using namespace std;

int main() {
    int size;

    // Taking array size input from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Taking array elements input from the user
    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Output the array elements in reverse order
    cout << "The array in reverse order is: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
