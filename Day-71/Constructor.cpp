#include<iostream>
using namespace std;
class Customer 
{
    string name;
    int account_number;
    int balance;

public:
    // Default Constructor we are making this
    Customer() 
    {
        cout << "Default constructor is called" << endl;
    }

    // Parameterized Constructor
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    // Function to display data
    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() 
{

    // Default constructor call 
    Customer c1;

    // Parameterized constructor call
    Customer A1("Vijay", 1561671, 1000000);

    A1.display();

    return 0;
}
//jb me khud se constuctor bna deta hu to compiler kon bnva