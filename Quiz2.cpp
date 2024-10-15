#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    double grade;
    
    
    void displayInfo(){
        cout<<"Student Name is : "<<name<<endl;
        cout<<"Student Age is : "<<age<<endl;
        cout<<"Student Grade is : "<<grade<<endl;
        cout << "------------------" << endl;
    }
};


int main(){
    Student obj_student[5];
    obj_student[0] = {"Alice", 20, 85.5};
    obj_student[1] = {"Bob", 21, 90.0};
    obj_student[2] = {"Charlie", 22, 88.5};
    obj_student[3] = {"David", 23, 92.0};
    obj_student[4] = {"Eve", 24, 87.0};
    
    for(int i=0; i<5 l; i++){
        cout<<"Student "<<i+1<<" Info "<<endl;
        obj_student[i].displayInfo();
    }
}
