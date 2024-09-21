#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Get the dimensions of the 2D arrays
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Declare three 2D arrays
    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    // Input elements for first array
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr1[i][j];
        }
    }

    // Input elements for second array
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr2[i][j];
        }
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Output the resulting sum array
    cout << "Sum of the two arrays:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
