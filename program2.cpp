#include<iostream>
using namespace std;

class Students {
    public:
    string name;
    int marks;

    void display(){
        cout << name << endl;
        cout << marks << endl;
    }
};

int main(){
   Students s1, s2;

   s1.name = "Ali";
   s1.marks = 85;

   s2.name = "Ahmed";
   s2.marks = 84;

   s1.display();
   s2.display();

   return 0;
};

