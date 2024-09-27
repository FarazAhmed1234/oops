#include<iostream>
using namespace std;

class Employee {
    int empid;
    string name;
    double salary;

public:
    // Function to get employee data
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> empid;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    // Function to display employee data
    void display() {
        cout << "Employee ID: " << empid << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    Employee employees_obj[5]; // Array of 5 Employee objects

    // Get details for 5 employees
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for Employee " << i + 1 << ":" << endl;
        employees_obj[i].getdata();
    }

    // Display details of all 5 employees
    cout << "\nDisplaying Employee Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nDetails of Employee " << i + 1 << ":" << endl;
        employees_obj[i].display();
    }

    return 0;
}

