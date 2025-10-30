#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age<12||age>65)
        cout<<"YES"; // Eligible for discount
    else
        cout<<"NO"; // Not eligible

    return 0;
}
