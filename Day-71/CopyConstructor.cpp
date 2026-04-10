#include<iostream>
using namespace std;
class Student 
{
    string name;
    int age;

public:
    // Normal Constructor
    Student(string n, int a) 
    {
        name = n;
        age = a;
    }

    // Copy Constructor
    Student(Student &s) 
    {
        name = s.name;
        age = s.age;
    }

    void display() 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{

    Student s1("Vijay", 23);   // normal constructor
    Student s2 = s1;          // copy constructor call
    s1.display();
    s2.display();

    return 0;
}