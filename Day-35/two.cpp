#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    vector<int> arr = {3,2,5,3,1,2,3,7};
    int n=arr.size();

    vector<int>count(n,0);//initialize all counts as 0

    //Count frequency
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    //Print frequency from 1 to n
    for(int i=1;i<=n;i++){
        cout<<i<<" -> "<<count[i]<<endl;
    }

    return 0;
}
//TC = O(N)
//SC = O(N)