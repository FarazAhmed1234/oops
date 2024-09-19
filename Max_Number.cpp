
#include<iostream>
using namespace std;

int main(){
	
	int size;
	
	cout<<"Enter the Size of array is : ";
	cin>>size;
   double arr[size];
   // Taking array elements input from the user
   cout << "Enter " << size << " elements for the array:\n";
   for (int i = 0; i < size; i++) {
       cin >> arr[i];
     
   }
   
       // Initialize the max value to the first element of the array
   int maxNumber = arr[0];

   // Loop through the array to find the maximum element
   for (int i = 1; i < size; i++) {
       if (arr[i] > maxNumber) {
           maxNumber = arr[i];
       }
   }

   // Output the maximum number
   cout << "The maximum number is: " << maxNumber << endl;
   
   