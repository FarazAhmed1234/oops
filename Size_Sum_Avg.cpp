#include <iostream>
using namespace std;

int main()
{

    int size, sum,avg;
    cout << "Enter the size is array is  :";
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Elenemts is : ";

        cin >> array[i];
    }

sum=0;
    for (int i = 0; i < size; i++)
    {
        sum =sum+array[i];
    }

avg = sum/size;

    cout <<"Sum is  : "<<sum<< endl;
     cout <<"Average is  : "<<avg<< endl;

 
    return 0;
}
