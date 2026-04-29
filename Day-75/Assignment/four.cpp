//Operator Overloading Example
//Multiply * Operator
#include<iostream>
using namespace std;
class Number
{
    int x;

public:
    Number(int a)
    {
        x=a;
    }

    void operator *(Number n)
    {
        cout<<x*n.x;
    }
};

int main(){
    Number n1(5),n2(4);
    n1*n2;
}