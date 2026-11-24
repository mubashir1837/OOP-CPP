
#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    void display() {
        cout << marks;
    }
};

int main() {
    Student s;
    s.display();

    return 0;
}
