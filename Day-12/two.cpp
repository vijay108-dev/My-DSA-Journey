#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Binary Number:";
    cin>>num;

    int rem,ans=0,mul=1; 

    while(num>0)
    {
        rem=num%10;        
        num=num/10;         
        ans=ans+rem*mul; 
        mul=mul*2;     
    }

    cout<<ans<<endl;

    return 0;
}