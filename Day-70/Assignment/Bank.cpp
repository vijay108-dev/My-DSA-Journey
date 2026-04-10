#include<iostream>
using namespace std;
class BankAccount 
{
    string name;
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int acc, double bal) 
    {
        name = n;
        accountNumber =acc;
        balance= bal;
    }

    void deposit(double amount) 
    {
        balance += amount;
    }

    void withdraw(double amount) 
    {
        if(amount <= balance)
        balance -= amount;
        else
        cout<<"Insufficient Balance"<<endl;
    }

    void display() 
    {
        cout << "Name: " << name <<endl;
        cout << "Account: " <<accountNumber<<endl;
        cout << "Balance: " << balance <<endl;
    }
};

int main() 
{
    BankAccount b("Vijay", 101, 1000);
    b.deposit(500);
    b.withdraw(300);
    b.display();
}