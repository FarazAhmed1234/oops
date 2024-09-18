#include <iostream>
using namespace std;

int main()
{

    int size, highest;
    cout << "Enter the size is array is  :";
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Elenemts is : ";

        cin >> array[i];
    }

    highest = array[0];

    for (int i = 0; i < size; i++)
    {
        if (array[i] > highest)
        {
            highest = array[i];
        }
    }

    cout << "Highest Number is : " << highest << endl;

    return 0;
}
