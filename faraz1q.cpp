#include <iostream>
using namespace std;

class Person {
public:
    string name, gender;
    int age;

    Person() : name(""), age(0), gender("") {}

    void displayDetails() {
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender << endl;
    }
};

class Patient : public Person {
public:
    string medicalHistory;

    Patient() : medicalHistory("") {}

    void displayDetails() {
        Person::displayDetails();
        cout << "Medical History: " << medicalHistory << endl;
    }
};

class Staff : public Person {
public:
    string position;  // Corrected from Postion to position

    Staff() : position("") {}

    // Updated setDetails to include position parameter
    void setDetails(const string& n, int a, const string& g, const string& p) {
        name = n;
        age = a;
        gender = g;
        position = p;
    }

    void displayDetails() {
        Person::displayDetails();
        cout << "Position: " << position << endl; 
    }
};

int main() {
    int numPatient, numStaff;

    cout << "Enter the number of patients: ";
    cin >> numPatient;
    Patient patients[numPatient];

    for (int i = 0; i < numPatient; i++) {  // Added semicolon
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

    cout << "\nEnter the number of staff members: ";
    cin >> numStaff;
    Staff staff[numStaff]; 

    for (int i = 0; i < numStaff; i++) {  // Corrected loop for staff input
        string name, gender, position;
        int age;
        cout << "\nEnter details for Staff Member " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Gender: ";
        cin >> gender;
        cout << "Position: ";  // Added input for position
        cin >> position;  // Capture the position
        staff[i].setDetails(name, age, gender, position);  // Corrected to staff[i]
    }   

    cout << "\nPatient Details:\n";  // Corrected to display patients
    for (int i = 0; i < numPatient; i++) {
        patients[i].displayDetails();  // Corrected to display patient details
        cout << endl;
    }
   
    cout << "\nStaff Details:\n";
    for (int i = 0; i < numStaff; i++) {
        staff[i].displayDetails();
        cout << endl;
    }

    return 0;
}

