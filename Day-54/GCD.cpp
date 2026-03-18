#include <iostream>
using namespace std;
int gcd(int a, int b){
    //Base Case
    if(b==0)
        return a;
    //Recursive Call
    return gcd(b,a % b);
}
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD is: "<<gcd(a,b)<<endl;

    return 0;
}