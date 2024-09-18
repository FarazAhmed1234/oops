

 #include <iostream>
 using namespace std;

 int main()
{

    int size;
    cout << "Enter the size is array is  :";
    cin >> size;

    int *array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " Elenemts is : ";

        cin >> array[i];
    }

    cout << "The array in order is: "<<endl;
    for (int i = 0; i < size; i++)
{
        cout<<array[i]<<" ";
}
cout<<endl;


    cout << "The array in reverse order is: "<<endl;
for(int i = size-1; i>=0 ; i--){
    cout<<array[i]<<" ";
}
cout<<endl;

 
    return 0;
}