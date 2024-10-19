#include <iostream>
#include <iomanip> // For std::setw
using namespace std;

class Student
{
private:
    string Name, Father_name, Roll_no;
    int eng, sin, phy, che, bio;
    int const Total_Marks = 500;
    double o_marks, per;
    string grade;
    string status;

public:
    void getdata();
    void display();
    void total_marks();
};

void Student::getdata()
{
    cout << "Enter Your Name: ";
    getline(cin, Name);
    cout << "Enter Your Father's Name: ";
    getline(cin, Father_name);
    cout << "Enter Your Roll Number: ";
    getline(cin, Roll_no);

    cout << "Enter English Subject Marks: ";
    cin >> eng;
    cout << "Enter Biology Subject Marks: ";
    cin >> bio;
    cout << "Enter Chemistry Subject Marks: ";
    cin >> che;
    cout << "Enter Physics Subject Marks: ";
    cin >> phy;
    cout << "Enter Sindhi Subject Marks: ";
    cin >> sin;
    cin.ignore(); // To ignore the newline character left in the input buffer
}

void Student::total_marks()
{
    o_marks = (eng + sin + phy + che + bio);
    per = (o_marks / Total_Marks) * 100;

    // Determine grade and status
    if (per >= 90)
    {
        grade = "A1";
    }
    else if (per >= 80 && per <= 90)
    {
        grade = 'A';
    }
    else if (per >= 70 && per <= 80)
    {
        grade = 'B';
    }
    else if (per >= 60 && per <= 70)
    {
        grade = 'C';
    }
    else if (per >= 50 && per <= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    if (per >= 50)
    {
        status = "Pass";
    }
    else
    {
        status = "Fail";
    }
}

void Student::display()
{
    cout << "-------------------------------------------------------------------------\n";
    cout << "==========================  Result Card  ================================\n";
    cout << "   Name    : " << Name << "                  " << " Father Name : " << Father_name << '\n';
    cout << "   Roll No : " << Roll_no << '\n';
    cout << "-------------------------------------------------------------------------\n";
    cout << "Subject                Total Marks    Obtained Marks\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << left << setw(26) << "English" << setw(18) << "100" << setw(21) << eng << '\n';
    cout << left << setw(26) << "Biology" << setw(18) << "100" << setw(21) << bio << '\n';
    cout << left << setw(26) << "Chemistry" << setw(18) << "100" << setw(21) << che << '\n';
    cout << left << setw(26) << "Physics" << setw(18) << "100" << setw(21) << phy << '\n';
    cout << left << setw(26) << "Sindhi" << setw(18) << "100" << setw(21) << sin << '\n';
    cout << "-------------------------------------------------------------------------\n";
    cout << "Total Marks :      " << o_marks << "         Percentage  :      " << per << "%\n";
    cout << "Grade       :      " << grade << '\n';
    cout << "Status      :      " << status << '\n';
}

int main()
{
    Student obj_Student;
    obj_Student.getdata();

    cout << "Press Enter to display the result...\n";
    cin.ignore(); // To ignore the newline character left in the input buffer
    cin.get();    // Wait for user to press Enter
    system("cls");
    obj_Student.total_marks();
    obj_Student.display();

    return 0;
}
