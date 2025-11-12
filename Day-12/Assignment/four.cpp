#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter Octal Number: ";
    cin>>num;
    int rem, ans = 0, mul = 1;
    for (int i=num;i> 0;i=i/10) 
    {
        rem=i %10;         
        ans=ans+rem* mul;
        mul=mul*8;    
    }
    cout<<ans<<endl;

    return 0;
}
