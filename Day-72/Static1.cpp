#include <iostream>
using namespace std;
class Customer 
{
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int account_number, int balance) 
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
        total_balance+=balance;

    }
    //Static member function
    static void access_Static()
    {
        cout<<total_customer<<endl;
        cout<<total_balance<<endl;
    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }

    }
    void withdraw(int amount)
    {
        if(amount<balance && amount>0)
        {
            balance-=amount;
            total_balance-=amount;
        }

    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<" ";
    }
    void display_total()
    {
        cout<<total_customer<<endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{

    //Static member Function
    Customer A1("Vijay", 1, 1000);
    Customer A2("Aashu", 2, 100);
    Customer A3("Sanya",3,1000);
    Customer::access_Static();
    A1.display_total(); //3 2100 3
    A1.deposit(800);
     Customer::access_Static();//3 2900
}