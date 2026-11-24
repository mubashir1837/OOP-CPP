#include<iostream>
using namespace std;

class Student {
    public:
    int age;

    Student(){
        cout << "Default constructor" << endl;
    }

    Student(int a){
        age = a;
        cout << "Parameterized  Constructor: " << a << endl;
    }
    
    Student(string name) {
        cout << "Name:" << name << endl;
    }
};

int main(){
    Student s1;
    Student s2(100);
    Student s3("Ali");
}