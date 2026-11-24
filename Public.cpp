#include <iostream>
using namespace std;

class Student {
public:
    int marks = 90;
};

int main() {
    Student s;
    cout << s.marks;

    return 0;
}
