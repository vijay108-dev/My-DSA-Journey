#include <iostream>
using namespace std;

//total_customer=0
//A1: name acc bal total
//A2: name acc bla total

class Customer 
{
    string name;
    int account_number, balance;
    //int total_customer;
    //it will create only once and it is same for all object 
    static int total_customer;

public:
//let's suppose i want to access this without object and my condition is it should be static
//static int total_customer;
    Customer(string name, int account_number, int balance) 
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        //total_customer=1;
        total_customer++;

    }
    //Static member function
    static void access_Static()
    {
        cout<<total_customer<<" ";
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

int main()
{
    // Customer A1("Vijay", 1, 100000);
    // Customer A2("Aashu", 2, 101000);
    // //A1.display(); //Vijay 1 100000 2
    // //A2.display(); //Aashu 2 101000 2
    // Customer A3("Sanya",3,100000);
    // //A3.display(); //Sanya 3 100000 3
    // //A1.display(); //Vijay 1 100000 3
    // //A2.display(); //Aashu 2 101000 3

    // A2.display_total(); //3

    // without object
    // Customer A1("Vijay", 1, 100000);
    // Customer A2("Aashu", 2, 101000);
    // Customer A3("Sanya",3,100000);
    // Customer::total_customer = 5;
    // A1.display_total(); //5

    //Static member Function
    Customer A1("Vijay", 1, 100000);
    Customer A2("Aashu", 2, 101000);
    Customer A3("Sanya",3,100000);
    Customer::access_Static();
    A1.display_total(); //3
}