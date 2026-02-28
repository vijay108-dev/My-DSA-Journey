#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target)
{
    int n =mat.size();
    int m= mat[0].size();
    int start =0;
    int end= n* m - 1;
    
    while(start <= end){
        int mid=start+ (end - start) / 2;
        
        int row =mid/m;
        int col = mid%m;
        
        if(mat[row][col]==target)
            return true;
        
        // Reverse comparison (because decreasing)
        else if(mat[row][col]>target)
            start = mid+1;
        else
            end = mid-1;
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {
        {50, 40, 30},
        {25, 20, 10},
        {5, 2, 1}
    };
    int x;
    cout<<"Enter the element: ";
    cin>>x;
    if(searchMatrix(mat, x))
        cout<<"Element is Found"<<endl;
    else
        cout<<"Element Not Found"<<endl;
    
    return 0;
}