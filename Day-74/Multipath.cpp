#include <iostream>
using namespace std;
// Base class
class Person 
{
public:
    string name;
    int age;

    void getData()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter age: ";
        cin>>age;
    }

    void display(){
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

// Virtual inheritance (important for multipath)
class YouTuber : virtual public Person{
public:
    void content()
    {
        cout<<"Creates YouTube content"<<endl;
    }
};

class Engineer : virtual public Person 
{
public:
    void work(){
        cout<<"Works as Engineer"<<endl;
    }
};

// Derived from both (multipath)
class CodeTeacher : public YouTuber, public Engineer {

public:
    void teach(){
        cout<<"Teaches coding"<<endl;
    }
};

int main()
{
    CodeTeacher obj;
    obj.getData();   //only one Person object (due to virtual)
    obj.display();
    obj.content();
    obj.work();
    obj.teach();

    return 0;
}