#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string user;
    string name;
    string newUser;
    double balance;
    int pinNumber;
    int withdraw;
    int deposit;
    string option;
    int newDeposit;

public:
    void setdata() {
        cout << "Are you a new user or existing (yes or no): ";
        getline(cin, user);

        if (user == "yes" || user == "YES") {
            cout << "Enter your name: ";
            getline(cin, newUser);
            cout << "Please deposit your cash in the deposit counter and enter the amount you wish to deposit: ";
            cin >> newDeposit;
            cin.ignore(); // Clear input buffer
        } else if (user == "no" || user == "NO") {
            cout << "Enter your name: ";
            getline(cin, name);

            cout << "Enter the PIN: ";
            cin >> pinNumber;
            cin.ignore(); // Clear input buffer
        } else {
            cout << "Please select a valid option and try again." << endl;
        }
    }

    void getdata() {
        if (user == "NO" || user == "no") {
            cout << "Your details have been successfully saved." << endl;
            cout << "Greetings! Your account has been created. Please wait for 5 hours to start any transaction." << endl;
        } else if (user == "YES" || user == "yes") {
            if (name == "AASHISH MAHAJAN" && pinNumber == 1983) {
                balance = 100000;
                if (option == "withdraw") {
                    cout << "Enter the amount you want to withdraw: ";
                    cin >> withdraw;
                    cout << "Available balance: " << balance - withdraw << endl;
                } else if (option == "deposit") {
                    cout << "Enter the amount you wish to deposit: ";
                    cin >> deposit;
                    cout << "Available balance: " << balance + deposit << endl;
                } else {
                    cout << "Invalid transaction option." << endl;
                }
            } else {
                cout << "Invalid credentials." << endl;
            }
        }
    }
};

int main() {
    Bank aObj;
    aObj.setdata();
    aObj.getdata();

    return 0;
}
