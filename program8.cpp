#include<iostream>
using namespace std;

class Bank{
   private:
   int balance;

   public:
   void setBalance(int b){
    if(b >= 0){
      balance = b;
    }
   }

   int getBalance(){
    return balance;

   }
};

int main(){
    Bank ac1;

    ac1.setBalance(2000);
    cout << "Balance: " << ac1.getBalance() << endl;
}