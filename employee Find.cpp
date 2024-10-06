
#include<iostream>
using namespace std;

class Employee{
    private:
    double salary,Total_salary;
    int hoursPerDay;

    public:

    void getdata(){
      cout<<"Enter the salary is : ";
      cin>>salary;

    cout << "Enter the number of hours of work per day: ";
    cin>>hoursPerDay;

 }

    void setdata(){
        if(salary<600 && hoursPerDay>8){
      Total_salary = salary+10+15;

      cout<<"The final salary of the employee : "<<Total_salary<<endl;
        }
    else if(salary>600 && hoursPerDay>8){
      Total_salary = salary+15;

      cout<<"The final salary of the employee : "<<Total_salary<<endl;
        }
    else if(salary<600 && hoursPerDay<8){
      Total_salary = salary+10;

      cout<<"The final salary of the employee : "<<Total_salary<<endl;
        }
    else{
        Total_salary=salary;
     cout<<"The final salary of the employee : "<<Total_salary<<endl;

    }
    }
};
int main(){

Employee obj;

obj.getdata();
obj.setdata();
return 0;
}
