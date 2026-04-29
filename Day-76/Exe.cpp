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
        try
        {
            if(amount<=0)
                throw amount;

            balance=balance+amount;

            cout<<amount<<" deposited successfully"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
        catch(int x)
        {
            cout<<"Invalid deposit amount"<<endl;
        }
    }

    // Withdraw function
    void withdraw(int amount)
    {
        try
        {
            if(amount>balance)
                throw amount;

            balance =balance-amount;

            cout<<amount<<" withdrawn successfully"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
        catch(int x)
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
};

int main(){
    Customer c1("Vijay", 5000, 101);

    c1.deposit(2000);
    c1.deposit(-100);
    c1.withdraw(3000);
    c1.withdraw(5000);

    return 0;
}