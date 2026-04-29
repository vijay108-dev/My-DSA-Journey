//Virtual Function Example
#include<iostream>
using namespace std;
class Teacher
{
public:

    virtual void work()
    {
        cout<<"Teacher teaches students"<<endl;
    }
};

class Engineer : public Teacher
{
public:

    void work()
    {
        cout<<"Engineer builds software"<<endl;
    }
};
int main()
{
    Teacher *t;
    Engineer e;
    t=&e;
    t->work();
}