#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//Traling zeroes in factorial
    int trailingZeroes(int n)
    {
        int count=0;
        while(n>=5)
        {
            count+=n/5;
            n =n/5;
        }

        return count;
    }
int main()
{
    
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
}
