#include <iostream>
using namespace std;

// Entity 1: Student
class Student {
public:
    string name;
    string grade;
    int studentID;

    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student ID: ";
        cin >> studentID;
        cout << "Enter student grade: ";
        cin >> grade;
    }

    void attendClass() {
        cout << name << " is attending class." << endl;
    }

    void submitAssignment() {
        cout << name << " has submitted the assignment." << endl;
    }

    void viewGrades() {
        cout << name << "'s grade is: " << grade << endl;
    }
};

// Entity 2: Teacher
class Teacher {
public:
    string name;
    string subject;
    int teacherID;

    void inputTeacher() {
        cout << "Enter teacher name: ";
        cin >> name;
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter teacher ID: ";
        cin >> teacherID;
    }

    void teachClass() {
        cout << name << " is teaching " << subject << " class." << endl;
    }

    void gradeAssignment(Student& student) {
        cout << name << " has graded " << student.name << "'s assignment." << endl;
    }

    void viewSchedule() {
        cout << name << "'s teaching schedule is being viewed." << endl;
    }
};

// Entity 3: Course
class Course {
public:
    string courseName;
    string courseCode;
    string teacher;

    void inputCourse() {
        cout << "Enter course name: ";
        cin >> courseName;
        cout << "Enter course code: ";
        cin >> courseCode;
    }

    void enrollStudent(Student& student) {
        cout << student.name << " has enrolled in " << courseName << "." << endl;
    }

    void assignTeacher(Teacher& teacherObj) {
        teacher = teacherObj.name;  // Direct assignment for std::string
        cout << teacherObj.name << " has been assigned to " << courseName << "." << endl;
    }

    void scheduleClass() {
        cout << "Class for " << courseName << " is scheduled." << endl;
    }
};

// Main system functionality demonstration
int main() {
    // Creating entities
    Student student1;
    Teacher teacher1;
    Course course1;

    // Input values
    cout << "Enter student details:\n";
    student1.inputStudent();

    cout << "\nEnter teacher details:\n";
    teacher1.inputTeacher();

    cout << "\nEnter course details:\n";
    course1.inputCourse();

cout<<"\n\n--------------------------------------------"<<endl;
cout<<"Student Info : "<<endl;
    // Demonstrating behaviors
    student1.attendClass();
    student1.submitAssignment();
    student1.viewGrades();


cout<<"--------------------------------------------"<<endl;
cout<<"Teacher Info : "<<endl;
    teacher1.teachClass();
    teacher1.gradeAssignment(student1);
    teacher1.viewSchedule();


cout<<"--------------------------------------------"<<endl;
cout<<"Course Info : "<<endl;
    course1.enrollStudent(student1);
    course1.assignTeacher(teacher1);
    course1.scheduleClass();

    return 0;
}

