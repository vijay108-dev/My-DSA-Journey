#include <iostream>
using namespace std;
int main()

{
    int num;
    cout<<"Enter Octal Number: ";
    cin>>num;

    int rem, ans=0,mul =1;   

    for (int i=num;i>0;i=i/10)
    
    {
        rem=i%10;  // extract one octal digit
        int binPart=0; // store 3-bit binary of one octal digit
        int base=1; // binary place value 1, 10, 100

        // Inner loop convert one octal digit into 3 binary bits
        for(int j=0;j<3;j++)
        {
            int bit =rem%2;// find binary bit
            rem = rem/ 2; // reduce octal digit
            binPart=binPart +bit *base; // form binary part
            base = base*10;            // move to next binary place
        }

        ans=ans+binPart*mul; // add binary part to final answer
        mul=mul*1000;// move 3 bits left for next group
    }

    cout<<ans<<endl;

    return 0;
}
