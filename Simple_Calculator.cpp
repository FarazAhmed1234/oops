#include<iostream>
using namespace std;

int main(){
	int option;
	double num1, num2;
	
	
	while(true){
		        // Display options
        cout << "\nChoose operation: \n";
        cout << "Press 1 for Addition\n";
        cout << "Press 2 for Subtraction\n";
        cout << "Press 3 for Multiplication\n";
        cout << "Press 4 for Division\n";
        cout << "Press 0 to Exit\n";
        cout << "Enter your choice: ";
        cin >> option;
        
        
               if (option==0) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }
        
     // Take two numbers as input
        cout << "Enter First number: ";
        cin >> num1;
        
        cout << "Enter Second number: ";
        cin >> num2;
        
        
        switch(option){
        	case 1:
            cout << "Addition two number is : " << num1 + num2 << endl;
                break;
                
           	case 2:
            cout << "Subtraction two number is : " << num1 - num2 << endl;
                break;
                
               	case 3:
            cout << "Multiplication two number is : " << num1 * num2 << endl;
                break;
            
               	case 4:
            cout << "Division two number is : " << num1 / num2 << endl;
                break;
		}

	}
}