#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    double salary;

    Employee() : name("No Name"), id(0), salary(0.0) {}

    Employee(string empname, int empid, double empsalary) :
        name(empname), id(empid), salary(empsalary) {}

    void display() {
        cout << "Name is : " << name << endl;
        cout << "Employee ID is : " << id << endl;
        cout << "Salary : $ " << salary << endl;
    }
};

int main() {
    int numEmployees;

    cout << "Enter the number of Employees: ";
    cin >> numEmployees;

    Employee* employees = new Employee[numEmployees]; // Dynamically allocate an array

    for (int i = 0; i < numEmployees; i++) {
        string name;
        int id;
        double salary;

        cout << "\nEnter details for employee " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Employee ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> salary;

        // Use the constructor to initialize the Employee object
        employees[i] = Employee(name, id, salary);
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].display();
    }

    delete[] employees; // Free the dynamically allocated memory
    return 0;
}

