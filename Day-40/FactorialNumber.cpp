#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>ans(1, 1);   // initially 1 stored
    while(N>1)
    {
        int carry=0;
        int size=ans.size();

        for (int i=0;i<size;i++)
        {
            int res=ans[i] * N +carry;
            carry=res/10;
            ans[i]=res % 10;
        }
        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        N--;
    }
    // reverse print because digits stored in reverse order
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}
//Time Complexity = O(N^2)
//Space Complexity = O(D) d means number of digits in n!