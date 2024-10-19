#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <string>
using namespace std;

class login_Signup {
private:
    string username;
    string password;
    string email;

public:
    void menu() {
        int choice;
        cout << "***********************************************************************\n\n\n";
        cout << "                                Menu                                    \n\n";
        cout << "***********************************************************************\n\n\n";
        cout << "1. LOGIN" << endl;
        cout << "2. REGISTER" << endl;
        cout << "3. DELETE RECORD" << endl; // New option for deleting a record
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                registr();
                break;
            case 3:
                deleteRecord(); // Call to delete function
                break;
            case 4:
                cout << "Thanks for using this program.\nThis program is created by @InhaleCode(rxn)\n\n";
                exit(0);
            default:
                system("cls"); 
                cout << "You've made a mistake, Try again..\n" << endl;
                menu(); 
        }
    }

    void login() {
        system("cls"); 
        cout << "***********************************************************************\n\n";
        cout << "                      Welcome to login page                               \n";
        cout << "***********************************************************************   \n\n";

        string user_enter, password_enter;
        cout << "Please enter the following details" << endl;
        cout << "Enter USERNAME: ";
        cin >> username;
        cout << "Enter PASSWORD: ";
        cin >> password;

        ifstream input("database.txt");

        while (input >> user_enter >> password_enter) {
            if (user_enter == username && password_enter == password) {
                system("cls");
                cout << "\nHello " << username << "\n LOGIN SUCCESSFUL \nThanks for logging in..\n";
                cin.get(); 
                menu();
                return; 
            }
        }
        input.close();

        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        menu();
    }

    void registr() {
        system("cls");
        cout << "***********************************************************************\n\n\n";
        cout << "                      Welcome To REGISTER Page                         \n\n";
        cout << "***********************************************************************\n\n\n";

        string reg_user, reg_pass, reg_email;
        cout << "Enter the username: ";
        cin >> reg_user;

        while (true) {
            cout << "\nEnter your email: ";
            cin >> reg_email;

            ifstream input("database.txt");
            bool userExists = false;
            string registr_Username, registr_Password, registr_Email;

            while (input >> registr_Username >> registr_Password >> registr_Email) {
                if (registr_Email == reg_email) {
                    userExists = true;
                    break;
                }
            }
            input.close();

            if (userExists) {
                cout << "\nEmail already taken. Please try with a different Email.\n";
                cin.get();
            } else {
                break; 
            }
        }

        if (reg_email.find('@') == string::npos || reg_email.find('.') == string::npos) {
            cout << "Invalid email format. Must contain '@' and '.'" << endl;
            cin.get(); 
            menu();
            return; 
        }

        while (true) {
            cout << "\nEnter the password : ";
            cin >> reg_pass;

            if (reg_pass.length() < 8) {
                cout << "Password must be at least 8 characters long." << endl;
            } else {
                ofstream reg("database.txt", ios::app);
                reg << reg_user << ' ' << reg_pass << ' ' << reg_email << endl;
                system("cls"); 
                cout << "\nRegistration Successful\n";
                menu();
                return; 
            }
        }
    }

    void deleteRecord() {
        system("cls");
        cout << "***********************************************************************\n\n";
        cout << "                      Welcome To DELETE Record Page                   \n\n";
        cout << "***********************************************************************\n\n";

        string del_username;
        cout << "Enter the username to delete: ";
        cin >> del_username;

        ifstream input("database.txt");
        ofstream temp("temp.txt"); // Temporary file to store records except the one to delete

        string registr_Username, registr_Password, registr_Email;
        bool found = false;

        while (input >> registr_Username >> registr_Password >> registr_Email) {
            if (registr_Username == del_username) {
                found = true; // Username found, do not copy it to the temp file
                continue;
            }
            temp << registr_Username << ' ' << registr_Password << ' ' << registr_Email << endl; // Copy other records
        }

        input.close();
        temp.close();

        // Replace the original file with the temporary file
        remove("database.txt");
        rename("temp.txt", "database.txt");

        if (found) {
            cout << "Record with username '" << del_username << "' has been deleted successfully.\n";
        } else {
            cout << "No record found for the username '" << del_username << "'.\n";
        }

        cin.get(); 
        menu();
    }
};

int main() {
    login_Signup userSystem;
    userSystem.menu();
    return 0;
}

