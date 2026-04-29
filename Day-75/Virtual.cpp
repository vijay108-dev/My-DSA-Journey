#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function
    virtual void speak() 
    {
        cout<<"huhu"<<endl;
    }
};

class Dog : public Animal{
public:
    // Override function
    void speak(){
        cout<<"Dog barks"<<endl;
    }
};

//huhu will print bcz it decides at compile time so that is why i use virtual function it will do at runtime

int main(){
    Animal* p; //base class pointer
    p = new Dog();
    p->speak();  // calls Dog's speak (runtime polymorphism)

    return 0;
}

// if you want to make a class and you want to not create an object where you use virtual function