#include<iostream>
using namespace std;
class Student 
{
    string name;
    int age;

public:
    // Inline Constructor (class ke andar hi defined)
    Student(string n, int a) 
    {
        name = n;
        age = a;
    }

    void display() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{

    Student s1("Vijay", 23);  // constructor call
    s1.display();

    return 0;
}