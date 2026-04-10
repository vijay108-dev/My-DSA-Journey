#include<iostream>
using namespace std;
//Constructor Overloading
class Student 
{
    string name;
    int age;

public:
    // 1. Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // 2. Constructor with 1 parameter
    Student(string n) {
        name = n;
        age = 23;
    }

    // 3. Constructor with 2 parameters
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() 
{

    Student s1;               // Default constructor
    Student s2("Vijay");      // 1 parameter constructor
    Student s3("Aashu", 23);  // 2 parameter constructor
    s1.display();
    s2.display();
    s3.display();

    return 0;
}