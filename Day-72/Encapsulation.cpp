#include <iostream>
using namespace std;

class Customer
{ 
    //public: i will not do this we do not want to give direct access if you want so use function where i will aplly my conditions
    string name;
    int balance;
    int age;

public:
     Customer(string name, int balance, int age) 
    {
        this->name = name;
        this->balance = balance;
        this->age = age;


    }
    void deposit(int amount)
    {
        if(amount>0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid amount";
        }
    }

    void withdraw(int amount)
    {
        if(amount<=balance && amount>0)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid amount";
        }
    }

    void display()
    {
        cout<<name<<" "<<balance<<" "<<age<<endl;
    }
};

int main()
{
    Customer A1("Vijay", 1000, 21);

    A1.deposit(500);
    A1.withdraw(400);

    A1.display();
}