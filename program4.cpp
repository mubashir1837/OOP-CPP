#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << name << endl;
        cout << age << endl;
    }
};

int main()
{
    Student s1("Mubashir", 20);
    s1.display();
    return 0;
}