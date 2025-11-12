#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter decimal Number:";
    cin>>num;

    int rem,ans=0,mul=1; 

    while(num>0)
    {
        rem=num%8;       
        num=num/8;       
        ans=ans+rem*mul; 
        mul=mul*10;       
    }

    cout<<ans<<endl;

    return 0;
}