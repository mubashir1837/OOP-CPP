
#include <iostream>
using namespace std;

class BankAccount {
    
private:
    // Private data members
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    // Setter function
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Amount deposited successfully!" << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
        else {
            cout << "Invalid amount or insufficient balance!" << endl;
        }
    }

    // Getter function
    double getBalance() {
        return balance;
    }

    // Display function
    void displayAccount() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main() {

    // Creating an object
    BankAccount account("Mubashir", 5000);

    // Accessing public functions
    account.displayAccount();

    cout << "\nDepositing 2000..." << endl;
    account.deposit(2000);

    cout << "\nWithdrawing 1000..." << endl;
    account.withdraw(1000);

    cout << "\nFinal Account Details:" << endl;
    account.displayAccount();

    // Accessing balance through getter
    cout << "\nBalance using getter: "
         << account.getBalance() << endl;

    return 0;
}
