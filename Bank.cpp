#include<iostream>
using namespace std;

class Bank{
    private:
    double balance;

    public:

    void setBalance(double amount){
        if(amount >= 0){
            balance = amount;
        } else{
            cout << "Invalid Balance" << endl;
        }
    }
    double getBalance(){
        return balance;
    }

};

int main(){
    Bank b1;

    b1.setBalance(50000);
    cout << "Balance: " << b1.getBalance() << endl;
    return 0;
}