// #include <iostream>
// using namespace std;
// void subsetSum(int arr[], int index, int n, int sum)
// {
    
//     //base case
//     if(index==n){
//         cout<<sum<<" ";
//         return;
//     }
//     // NO (exclude)
//     subsetSum(arr, index+1, n, sum);

//     // YES (include)
//     subsetSum(arr, index+1, n, sum+arr[index]);
// }

// int main()
// {
//     int arr[]={3,4,5};
//     int n=3;
//     subsetSum(arr,0,n,0);

//     return 0;
// }
//TC = O(2^N)
//SC = O(n)


// #include <iostream>
// using namespace std;
// void subsetSum(int arr[], int index, int n, int sum,vector<int>&ans)
// {
    
//     //base case
//     if(index==n){
//         ans.push_back(sum);
//         return;
//     }
//     // NO (exclude)
//     subsetSum(arr, index+1, n, sum,ans);

//     // YES (include)
//     subsetSum(arr, index+1, n, sum+arr[index],ans);
// }

// int main()
// {
//     int arr[]={3,4,5};
//     vector<int>ans;
//     int n=3;
//     subsetSum(arr,0,n,0,ans);

//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// void subsetSum(int arr[], int index, int n, int sum,vector<int>&temp) 
// {
//     //base case
//     if(index==n)
//     {
//         cout<<sum<<" -> { ";
//         for(int i=0;i<temp.size();i++) 
//         {
//             cout<<temp[i]<<" ";
//         }
//         cout << "}" << endl;
//         return;
//     }
//     // NO (exclude)
//     subsetSum(arr, index+1, n, sum, temp);

//     // YES (include)
//     temp.push_back(arr[index]);
//     subsetSum(arr, index+1, n, sum + arr[index], temp);
//     temp.pop_back();
// }

// int main() {
//     int arr[]={3,4,5};
//     int n=3;
//     vector<int>temp;
//     subsetSum(arr,0,n,0,temp);

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

void subsetSum(int arr[], int index, int n, int sum, vector<int>& ans,vector<vector<int>>& subsets,vector<int>& temp)
{
    // base case
    if (index==n){
        ans.push_back(sum);
        subsets.push_back(temp);
        return;
    }
    // NO (exclude)
    subsetSum(arr,index+1,n,sum,ans,subsets,temp);
    // YES (include)
    temp.push_back(arr[index]);
    subsetSum(arr,index+1,n,sum+arr[index],ans,subsets,temp);
    temp.pop_back();
}
int main()
{
    int arr[]={3,4,5};
    int n=3;
    vector<int>ans;
    vector<vector<int>>subsets;
    vector<int> temp;
    subsetSum(arr, 0, n, 0, ans, subsets, temp);

    // print sum + subset
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" -> { ";
        for(int j=0;j<subsets[i].size();j++){
            cout<< subsets[i][j]<< " ";
        }
        cout<<"}" << endl;
    }

    return 0;
}