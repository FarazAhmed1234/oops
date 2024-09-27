#include <iostream>
using namespace std;

class students {
public:
    string name, gender, Obedience, Attentiveness, Neatness;
    int age,roll_No;

    void getdate() {
        cout << "Enter the name is : ";
        cin >> name;
        cout << "Enter the age is : ";
        cin >> age;
        cout << "Enter the gender is : ";
        cin >> gender;
        cout << "Enter the roll_No is : ";
        cin >> roll_No;
    
    }

    void behavior() {
        cout << "Enter the behavior :" << endl;
        cout << "Obedience is :";
        cin >> Obedience;
        cout << "Attentiveness is :";
        cin >> Attentiveness;
        cout << "Neatness is :";
        cin >> Neatness;

    }

    void behavior_display() {
        cout << "behavior :" << endl;
        cout << "Obedience is :" << Obedience << endl;
        cout << "Attentiveness is :" << Attentiveness << endl;
        cout << "Neatness is :" << Neatness << endl;
    }

    void dispaly(){
        cout << "Name is : " << name << endl;
        cout << "Age is :" << age<< endl;
        cout << "gender is : " << gender << endl;
        cout << "roll_No is : " << roll_No << endl;


    }
};
int main()
{
    students obj1, obj2;
    cout << "Enter the first student information " << endl;
    obj1.getdate();
    obj1.behavior();
    cout << "Enter the Secondent information " << endl;
    obj2.getdate();
    obj2.behavior();
    cout << "-----------------------------------" << endl;
    cout << "First student is : " << endl;
    obj1.dispaly();
    obj1.behavior_display();
    cout << "-----------------------------------" << endl;
    cout << "Second student is :" << endl;
    obj2.dispaly();
    obj2.behavior_display();

    
}

