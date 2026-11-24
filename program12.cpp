#include <iostream>
using namespace std;

class Parent{
protected:
    int age;
};

class Child : public Parent{
    public:
    void setAge(int a){
        age = a;
    }
    void display(){
        cout << age;
    }
};

int main() {
    Child c1;

    c1.setAge(20);
    c1.display();

    return 0;
}