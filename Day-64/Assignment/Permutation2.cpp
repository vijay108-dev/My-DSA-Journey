#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permut(vector<int> &arr, int index, vector<vector<int>> &ans)
{
    if (index==arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for (int i=index;i<arr.size();i++)
    {
        // skip duplicate
        bool skip=false;
        for(int j=index;j<i;j++)
        {
            if (arr[j]==arr[i])
            {
                skip=true;
                break;
            }
        }
        if(skip)
         continue;

        swap(arr[i], arr[index]);
        permut(arr, index+1, ans);
        swap(arr[i], arr[index]);
    }
}

int main(){
    vector<int> arr={1, 1, 2};   // duplicate case
    vector<vector<int>> ans;

    sort(arr.begin(),arr.end());  // that iss important

    permut(arr,0,ans);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}