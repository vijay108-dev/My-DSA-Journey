#include<iostream>
using namespace std;
// Parent class
class Human
{
protected:
    string name;
    int age;

public:
    // Constructor
    Human()
    {
        cout << "Human Constructor Called" << endl;
    }

    // Destructor
    ~Human()
    {
        cout << "Human Destructor Called" << endl;
    }

    void work()
    {
        cout << "I am Busy" << endl;
    }
};

// Child class
class Student : public Human
{
    int roll_number, fees;

public:
    // Constructor
    Student()
    {
        cout << "Student Constructor Called" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student Destructor Called" << endl;
    }

    void setData(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Fees: " << fees << endl;
    }
};

int main()
{
    Student A1;

    A1.setData("Vijay", 20, 101, 4000);
    A1.display();

    A1.work();

    return 0;
}