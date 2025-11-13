#include <iostream>
using namespace std;

int sum(int a,int b) //function declare
{
    // return a+b;
    // or
    int ans = a + b;  //function define
    return ans;
}

int mul (int m, int n)
{
    return m*n;
}

void fun()
{
    cout<<"Hello!!"<<endl;
}

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

bool Prime(int n){
    if(n<=1) 
    return 0;
    for (int i=2;i*i<=n;i++){
        if(n%i==0)
         return 0;
    }
    return 1;
}

int main() 
{
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    //function call
    cout<<"Sum = "<<sum(x,y)<<endl;

    cout<<mul(x,y)<<endl;

    fun();

    cout<<factorial(4)<<endl;

    cout<<Prime(6)<<endl;

    return 0;
}
