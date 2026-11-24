#include <iostream>
using namespace std;

class Animal {
protected:
    int age = 5;
};

class Dog : public Animal {
public:
    void display() {
        cout << age;
    }
};

int main() {
    Dog d;
    d.display();

    return 0;
}
