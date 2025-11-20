#include <iostream>
using namespace std;
class Solution{
public:
    bool isPowerOfTwo(int n)
    {
        if(n<=0)
            return false;

        while(n>1)
        {
            if (n%2!=0)  // if number is not divided by 2
                return false;

            n=n/2;
        }
        return true; // end me 1 mil gaya to power of 2
    }
};

int main(){
    Solution s;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(s.isPowerOfTwo(n))
        cout<<n<< " is a Power of 2"<<endl;
    else
        cout<<n<<" is NOT a Power of 2"<<endl;



    return 0;
}
