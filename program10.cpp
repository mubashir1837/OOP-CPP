#include<iostream>
using namespace std;

class Student{
    private:
    int age;

    public:

    void setAge(int a){
       age = a;
    }

    void showAge(){
      cout << "Age of the Student is: " << age << endl;
    }
};

int main(){
 Student s1;

 s1.setAge(21);
 s1.showAge();
}