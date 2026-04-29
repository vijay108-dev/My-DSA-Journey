#include<iostream>
using namespace std;
class Test
{
    int x;

public:

    Test(int a)
    {
        x=a;
    }

    void operator -()
    {
        x=-x;
    }

    void display()
    {
        cout<<x;
    }
};

int main(){
    Test t(10);
    -t;
    t.display();
}