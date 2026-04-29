//Compile Time Example
#include<iostream>
using namespace std;
class menu
{
public:

    void show()
    {
        cout<<"No argument"<<endl;
    }

    void show(int x)
    {
        cout<<"Integer argument"<<endl;
    }
};

int main()
{
    menu d;
    d.show();
    d.show(10);
}