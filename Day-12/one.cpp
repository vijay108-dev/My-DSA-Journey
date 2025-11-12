#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter decimal number:";
    cin>>num;

    int rem,ans=0,mul=1; 

    while(num> 0)
    {
        rem=num%2;        // remainder gives binary digit
        num=num/2;         // reduce number
        ans=ans+rem*mul; // add digit at correct place
        mul=mul*10;        // move to next binary place
    }

    cout<<ans<<endl;

    return 0;
}
