#include<iostream>
using namespace std;

class Account {
public:
    string accountNumber;
    double balance;

    Account(string acnum, double initialBalance = 0) 
        : accountNumber(acnum), balance(initialBalance) {}

    void showBalance() {
        cout << "Account Number is " << accountNumber << endl;
        cout << "Balance is $ " << balance << endl;
    }

    void deposit(double amount) {
        if (amount < 0) {
            cout << "Error: Deposit amount cannot be negative." << endl;
        } else {
            balance += amount;
            cout << "Successfully deposited $" << amount << " to account " << accountNumber << "." << endl;
        }
    }
};

class Customer {
public:
    void performOperations() {
        Account account1("HBL123");
        Account account2("ABL456");
        Account account3("DIB789");

        account1.deposit(500);
        account1.showBalance();
   
   
           account2.deposit(100);
        account2.showBalance();
        
        
                account3.deposit(1090);
        account3.showBalance();
        
        
        
                account3.deposit(-50);
        account3.showBalance();
   
    }
};

int main() {
    Customer customer;
    customer.performOperations();
}

