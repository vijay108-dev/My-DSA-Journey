// 1. What is const keyword in classes?
// const means value cannot be changed

//Use in class:
// If you make a variable const → its value cannot change after initialization
// If you make a function const → it cannot modify class data

#include<iostream>
using namespace std;
class Customer
{
    string name;
    int balance;

public:
    Customer(string name, int balance)
    {
        this->name=name;
        this->balance=balance;
    }
    // const function
    void display() const
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    Customer c1("Vijay", 5000);
    c1.display();

    return 0;
}