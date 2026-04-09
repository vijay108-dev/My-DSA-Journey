#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, roll_number;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name = "Vijay";
    (*S).age = 23;
    (*S).roll_number = 31;
    (*S).grade = "A++";

    cout<<S->name<<endl; //Vijay
   

    return 0;
}