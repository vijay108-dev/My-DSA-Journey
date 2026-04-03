#include <iostream>
#include <vector>
using namespace std;

void permut(vector<int> &arr, vector<vector<int>> &ans, int index)
{
    // base case
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    // use array to track duplicates (-10 to +10 range → size 21)
    vector<bool> use(21, 0);

    for (int i = index; i < arr.size(); i++)
    {
        // check if this value already used at this level
        if (use[arr[i] + 10] == 0)
        {
            use[arr[i] + 10] = 1;   // mark as used

            swap(arr[index], arr[i]);      // fix element
            permut(arr, ans, index + 1);   // recursion
            swap(arr[index], arr[i]);      // backtrack
        }
    }
}

int main()
{
    vector<int> arr = {1, 1, 2};
    vector<vector<int>> ans;

    permut(arr, ans, 0);

    // print
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//TC = O(n!*n)
//SC = O(n!*n)