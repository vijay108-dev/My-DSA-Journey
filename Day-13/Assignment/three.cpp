#include <iostream>
using namespace std;
void rotateValues(int &a,int &b,int &c)
{
    int d=a;
    a=c;
    c=b;
    b=d;
}
int main()
{
    int a,b,c;
    cout<<"Enter a, b, c: ";
    cin>>a>>b>>c;
    rotateValues(a,b,c);
    cout<<a<<b<<c<<endl;

    return 0;
}
