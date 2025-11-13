#include <iostream>
using namespace std;

void passbyreference(int &x)
{
    x = x + 10; // original variable change
    cout<<"Inside function pass by reference: "<< x<<endl;
}
int main(){
    int a=5;
    passbyreference(a);
    cout<<"In main after function call: "<<a<<endl; // value will change
    return 0;

}
