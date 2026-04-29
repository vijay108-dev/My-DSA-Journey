#include<iostream>
using namespace std;
// Grandparent class
class Grandparent
{
public:
    void property()
    {
        cout << "Grandparent Property" << endl;
    }
};

// Parent class (inherits Grandparent)
class Parent : public Grandparent
{
public:
    void skills()
    {
        cout << "Parent Skills" << endl;
    }
};

// Child class (inherits Parent)
class Child : public Parent
{
public:
    void education()
    {
        cout << "Child Education" << endl;
    }
};

int main()
{
    Child c;

    c.property();   // Grandparent function
    c.skills();     // Parent function
    c.education();  // Child function

    return 0;
}