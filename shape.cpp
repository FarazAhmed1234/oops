#include<iostream>
using namespace std;

class Shape{
    int choice;
    // a is equal to area
    // b is equal to base
    // h is equal to height
    // c is equal to Circumference
    double a,b,h,c;

public:
    void display(){
        cout << "Press 1 to Calculate Circle Radius" << endl;
        cout << "Press 2 to Calculate Square Area" << endl;
        cout << "Press 3 to Calculate Triangle Area" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    void calculateCircleRadius(){
        cout << "Enter the Circumference is : ";
        cin >> c;
        double C_Radius = (c/(2*3.14));
        cout << "Square Area is: " << C_Radius << endl;
    }


    void calculateSquareArea(){
        cout << "Enter the side length of the square: ";
        cin >> a;
        double Sq_Area = a * a;
        cout << "Square Area is: " << Sq_Area << endl;
    }
    
    
    
    void calculateTriangleArea(){
        cout << "Enter the base is : ";
        cin >> b;
        cout<<"Enter the height is : ";
        cin>>h;
        double tr_Area = ((b * h)/2);
        cout << "Triangle Area is: " << tr_Area << endl;
    }
    void Swap_Made(){
        switch(choice){
            case 1:
                calculateCircleRadius();             
                break;

            case 2:
                calculateSquareArea();
                break;

            case 3:
                calculateTriangleArea();
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
};

int main(){
    Shape obj_Shape;
    obj_Shape.display();
    obj_Shape.Swap_Made();
    return 0;
}

