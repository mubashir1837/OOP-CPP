#include <iostream>
using namespace std;

class ATM
{
private:
    int balance = 10000;

public:
    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful" << endl;
            cout << "Remaining Balance: " << balance;
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }
};

int main()
{
    ATM a1;
    a1.withdraw(2000);
    return 0;
}