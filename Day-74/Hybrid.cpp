#include <iostream>
using namespace std;
// Base class
class Person{
public:
    void showPerson(){
        cout<<"I am a person"<<endl;
    }
};

// Derived from Person (Level 1)
class Male : public Person 
{
public:
    void showMale() {
        cout<<"I am male"<<endl;
    }
};

class Female : public Person{
public:
    void showFemale(){
        cout<<"I am female"<<endl;
    }
};

// Hybrid (multilevel + hierarchical)
class Boy : public Male 
{
public:
    void showBoy() 
    {
        cout<<"I am a boy"<<endl;
    }
};

class Girl : public Female 
{
public:
    void showGirl() 
    {
        cout<<"I am a girl"<<endl;
    }
};

int main()
{
    Boy b;
    Girl g;
    cout<<"Boy Object:\n";
    b.showPerson();
    b.showMale();
    b.showBoy();

    cout<<"\nGirl Object:\n";
    g.showPerson();
    g.showFemale();
    g.showGirl();

    return 0;
}