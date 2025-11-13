#include <iostream>
using namespace std;

// Function Overloading menas same function name with differnt argument
// For integers
void Swap(int &a,int &b) // pass by reference
{
    int c;
    c=a;
    a= b;
    b= c;
}

// For floats
void Swap(float &c,float &d)
{
    float r=c;
    c =d;
    d= r;
}

int main() {
    int a, b;
    cout<< "Enter two integers: ";
    cin>>a>>b;
    Swap(a,b);
    cout<< "After swapping integers: "<<a<<" " <<b <<endl;

    float f1=2.3, f2 =3.4;
    Swap(f1,f2);
    cout<<"After swapping floats: "<<f1<< " " << f2<<endl;

    return 0;
}
