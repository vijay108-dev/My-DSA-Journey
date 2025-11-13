#include <iostream>
using namespace std;
void passbyvalue(int x)
 {
    x= x+10; //changes occurs in copy
    cout << "Inside function pass by value: "<<x<<endl;
}

int main() 
{
    int a=5;
    passbyvalue(a);
    cout<<"In main after function call: "<<a<<endl; // original will same

    return 0;

}
