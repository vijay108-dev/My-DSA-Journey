#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Binary Number: ";
    cin>>num;

    int rem,ans=0,mul=1;
    for (int i= num;i>0;i=i/10){
        rem=i%10;          // last digit (0 or 1)
        ans=ans +rem*mul; // add (digit × power of 2)
        mul= mul*2;         // move to next power of 2
    }

    cout<<ans<<endl;

    return 0;
}
