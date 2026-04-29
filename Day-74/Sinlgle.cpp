#include<iostream>
using namespace std;
// Parent class
class Human
{
protected:
    string name;
    int age;

    public:
    void work()
    {
        cout<<"I am Busy"<<endl;
    }
};

// Child class(Single Inheritance)
class Student : public Human
{
    int roll_number,fees;

    public:

    void setData(string name, int age, int roll_number, int fees)
    {
        this->name = name;          // parent ka variable
        this->age = age;         // parent ka variable
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "fees: " << fees << endl;
    }
};

int main()
{
    Student A1;
    A1.setData("Vijay", 20, 101,4000);
    A1.display();

    A1.work(); //I am Busy

    return 0;
}