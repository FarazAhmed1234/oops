#include <iostream>
using namespace std;

class Person {
public:
    string name, gender;
    int age;

    Person() : name(""), age(0), gender("") {}



};

class Patient : public Person {
public:
    string medicalHistory;

    Patient() : medicalHistory("") {}

    void displayDetails() {

        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
        cout << "Medical History: " << medicalHistory << endl;
    }
};


class Staff : public Person {
public:
    string position;

    Staff() : position("") {}


    void setDetails(const string& n, int a, const string& g, const string& p) {
        name = n;
        age = a;
        gender = g;
        position = p;
    }


    void displayDetails() {

        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
        cout << "Postion of Staff : " << position << endl;
    }
};


int main(){
    int numPatient, numStaff;

    cout << "Enter the number of patients: ";
    cin >> numPatient;
    Patient patients[100
    ];

    for (int i = 0; i < numPatient; i++) {
        cout << "\nEnter details for Patient " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> patients[i].name;
        cout << "Age: ";
        cin >> patients[i].age;
        cout << "Gender: ";
        cin >> patients[i].gender;
        cout << "Medical History: ";
        cin >> patients[i].medicalHistory;
    }

    cout << "\nEnter the number of Staff: ";
    cin >> numStaff;
    Staff staff[100];
    for (int i = 0; i < numPatient; i++) {
        string name, gender, position;
        int age;
        cout << "\nEnter details for Staff Member " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Gender: ";
        cin >> gender;
        cout << "Position: ";
        cin >> position;
        staff[i].setDetails(name, age, gender, position);
    }
    cout << "\nPatient Details:\n";
    for (int i = 0; i < numPatient; i++) {
        patients[i].displayDetails();
        cout << endl;
    }

    cout << "\nStaff Details:\n";
    for (int i = 0; i < numStaff; i++) {
        staff[i].displayDetails();
        cout << endl;
    }
    return 0;
}
