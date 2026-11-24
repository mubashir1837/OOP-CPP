#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    double gpa;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "GPA: " << gpa << endl;
        cout << "Age: " << age << endl;
    }
}; 

int main(){
    Student s1;
    
    s1.name ="Mubashir Ali";
    s1.gpa = 3.56;
    s1.age = 21;

    s1.display();
}