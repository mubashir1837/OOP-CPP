#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    float gpa;
    int age;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Name: " << gpa << endl;
        cout << "Name: " << age << endl;
    }
}; 

int main(){
    Student s1;
    
    s1.name ="Mubashir Ali";
    s1.gpa = 3.56;
    s1.age = 21;

    s1.display();
}