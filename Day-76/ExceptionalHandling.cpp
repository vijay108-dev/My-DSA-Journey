// Exception handling means handling errors in a program so the program does not crash.

// Example:
// If we divide a number by 0, an error occurs.
// Exception handling catches and manages that error.

// Main keywords:
// try → try block contains the code that may produce an error.
// throw → throw is used to generate/send an exception (error).
// catch → catch block receives and handles the exception.

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance, account_number;

public:

    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit function
    void deposit(int amount)
    {
        balance = balance + amount;

        cout << amount << " deposited successfully" << endl;
        cout << "Current Balance: " << balance << endl;
    }

    // Withdraw function
    void withdraw(int amount)
    {
        if(amount > balance)
        {
            cout << "Insufficient Balance" << endl;
        }
        else
        {
            balance = balance - amount;

            cout << amount << " withdrawn successfully" << endl;
            cout << "Current Balance: " << balance << endl;
        }
    }
};

int main()
{
    Customer c1("Vijay", 5000, 101);

    c1.deposit(2000);

    c1.withdraw(3000);

    c1.withdraw(5000);

    return 0;
}