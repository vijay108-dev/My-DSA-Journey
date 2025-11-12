#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter Decimal Number: ";
    cin>>num;

    int rem, ans=0, mul=1;
    for (int i=num;i>0;i=i/2)
     {
        rem=i%2;        
        ans=ans+rem*mul; 
        mul=mul * 10;       
    }

    cout<<ans<<endl;

    return 0;
}
