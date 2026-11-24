#include<iostream>
using namespace std;

class Student{
    private:
    int age;

    public:

    void setAge(int a){
       age = a;
    }

    int getAge(){
        return age;
    }
};

int main(){
 Student s1;

 s1.setAge(21);
 cout << "Age of the Student: " << s1.getAge() << endl;
}