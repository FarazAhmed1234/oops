
#include<iostream>
using namespace std;

class savings{
    protected:
    double savingsBalance, interestRate;

    public:
    void datasave(){
cout << "Savings Account Balance: $";
    cin >> savingsBalance;
    cout << "Savings Interest Rate (%): ";
    cin >> interestRate;
    }

 void displaySavingsInfo() {
        cout << "Savings Account Balance: $" << savingsBalance << endl;
        cout << "Savings Interest Rate: " << interestRate << "%" << endl;
    }
};

class checking{
    protected:
    double checkingBalance , overdraftLimit ;

    public:
    void getchecking(){
    cout << "Checking Account Balance: $";
    cin >> checkingBalance;
    cout << "Overdraft Limit: $";
    cin >> overdraftLimit;
    }

    void displayCheckingInfo() {
        cout << "Checking Account Balance: $" << checkingBalance << endl;
        cout << "Overdraft Limit: $" << overdraftLimit << endl;
    }

    
};

class AccountHolder : public savings , public checking{
    private:
    string name , accountno;

    public:
    void getdata_AccountHolder(){
       cout << "Enter Account Holder Information:" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "Account Number: ";
    getline(cin, accountno);
    datasave();
    getchecking();

    }

    void display_AccountHolder(){
        cout<<"\n\nAccount Holder Profile:"<<endl;
        cout << "Account Holder Name: " << name << endl;
        cout << "Account Number: " << accountno << endl;
        displaySavingsInfo();
        displayCheckingInfo();
    }
};
int main(){

AccountHolder obj_AccountHolder;

obj_AccountHolder.getdata_AccountHolder();
obj_AccountHolder.display_AccountHolder();
return 0;
}
