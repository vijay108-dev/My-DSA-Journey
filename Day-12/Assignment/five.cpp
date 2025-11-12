#include <iostream>
using namespace std;
int main() 

{
    int num;
    cout<<"Enter Binary Number: ";
    cin>>num;
    int rem,ans=0, mul=1;   
    for (int i =num;i>0;){

        int octDigit=0;// stores one octal digit converted from 3 bits
        int base=1;// binary place value 1, 2, 4

        // Inner loop take 3 binary digits at a time
        for (int j=0;j<3&&i>0;j++)
        {
            rem=i %10;// extract last binary digit
            i=i/10;// remove that digit
            octDigit =octDigit +rem*base; // convert 3-bit binary to decimal
            base = base*2;// move to next binary place
        }

        ans=ans+octDigit*mul;// add octal digit at correct place
        mul=mul*10;              // move to next octal place
    }

    cout<<ans<<endl;

    return 0;

    
}
