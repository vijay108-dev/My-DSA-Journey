#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is NOT a Prime number.";
            return 0;  // If it gets divided then exit the loop right here
        }
        i++;
    }

    cout<<n<<" is a Prime number.";

    return 0;
}
