#include<iostream>
using namespace std;
class Human
{
public:
    string name;
    int age, weight;
};

class Student : protected Human
{
private:
    int roll_number, fees;

public:
    // constructor jaisa function
    void fun(string name, int age, int weight)
    {
        // this pointer use
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Weight: " << this->weight << endl;
    }
};
int main()
{
    Student A;
    A.fun("Vijay", 23, 60);
    A.display();

    return 0;
}