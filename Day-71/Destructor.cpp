#include<iostream>
using namespace std;
class Customer 
{
public:
    string name;
    int account_number;
    int *balance;

    // Constructor
    Customer(string n, int acc, int bal) 
    {
        name = n;
        account_number = acc;
        balance = new int;
        *balance = bal;
    }

    // Copy Constructor (Deep Copy)
    Customer(const Customer &c) 
    {
        name = c.name;
        account_number = c.account_number;

        balance = new int;
        *balance = *(c.balance);
    }

    // Destructor
    ~Customer() 
    {
        delete balance;   // free memory not delete object
        cout << "Destructor called for " << name << endl;
    }

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << *balance << endl;
    }
};

int main() {

    Customer c1("Vijay", 101, 1000);
    Customer c2 = c1;   // Copy constructor

    *(c2.balance) = 5000;

    cout << "Customer 1:" << endl;
    c1.display();

    cout << "\nCustomer 2:" << endl;
    c2.display();

    return 0;
}