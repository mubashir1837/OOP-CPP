#include<iostream>
using namespace std;

class Student{
    private:
    int marks;

    public:
    void setMarks(int m){
        marks = m;
    }

    void display(){
        cout << "Marks" << marks << endl;
    }
};

int main(){
    Student s1;
    s1.setMarks(90);
    s1.display();

    return 0;

}