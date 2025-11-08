#include<iostream>
using namespace std;
int main(){

    //Comparsion Operator
     int a=10,b=20;

    cout<<(a==b)<<endl;  // 0 (false)
    cout<<(a!=b)<<endl;  // 1 (true)
    cout<<(a>b)<<endl;  // 0
    cout<<(a<b)<<endl;  // 1
    cout<<(a>= b)<<endl;  // 0
    cout<<(a<=b)<<endl;  // 1

      int x=15,y=15;

    if(x==y)
        cout<<"Both are equal"<<endl;
    else if(x>y)
        cout<<"x is greater"<<endl;
    else
        cout<<"y is greater"<<endl;

        return 0;
}