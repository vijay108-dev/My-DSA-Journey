#include <iostream>
#include <vector>
using namespace std;
void subseqSum(int i, int sum, vector<int> &arr, vector<int> &ans)
{
    //base case
    if(i==arr.size()) 
    {
        ans.push_back(sum);
        return;
    }

    //include current element
    subseqSum(i+1, sum + arr[i], arr, ans);

    //exclude current element
    subseqSum(i+1, sum, arr, ans);
}

int main()
{
    vector<int>arr={1,2,3};
    vector<int>ans;

    subseqSum(0, 0, arr, ans);

   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }

    return 0;
}
//TC = O(2^n)
//SC = O(2^n) + O(n) (result+recursion stack)