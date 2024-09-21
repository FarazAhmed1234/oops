#include <iostream>
using namespace std;

int main() {
    int size = 4;
    int array1[4] = {1, 2, 3, 4};
    int array2[4] = {5, 6, 7, 8};
    int resultArray[size];

    for (int i = 0; i < size; i++) {
        resultArray[i] = array1[i] * array2[i];
    }

    cout << "Resultant array: ";
    for (int i = 0; i < size; i++) {
        cout << resultArray[i] << " ";
    }
    cout << endl;

    return 0;
}
