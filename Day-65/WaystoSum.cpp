#include <iostream>
using namespace std;

int way(int arr[], int m, int sum)
{
    // base case
    if (sum == 0)
        return 1;

    if (sum < 0)
        return 0;

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        ans += way(arr, m, sum - arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 3};
    int m = 3;
    int sum = 4;

    cout << way(arr, m, sum);

    return 0;
}

// Time Complexity: O(m^sum)
// Space Complexity: O(sum)