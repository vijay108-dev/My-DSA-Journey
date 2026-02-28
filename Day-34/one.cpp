// Time Complexity: O(log(n*m))
// Space Complexity: O(1)
#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target){
    
    int n =matrix.size();
    int m =matrix[0].size();
    
    int start=0;
    int end=n * m - 1;
    
    while(start<=end){
        int mid =start+(end - start)/2;
        int row =mid/m;
        int col =mid%m;
        if(matrix[row][col]==target)
            return true;
        else if(matrix[row][col] <target)
            start = mid+1;
        
        else
            end =mid-1;
    }
    
    return false;
}
int main() 
{
    vector<vector<int>> matrix = {
        {2, 6, 10, 14, 18},
        {20, 24, 27, 29, 38},
        {47, 52, 78, 93, 102},
        {108, 111, 200, 218, 320}
    };
    
    int target;
    cout<<"Enter the target: ";
    cin>>target;
    
    if(searchMatrix(matrix, target))
        cout<<"Element Found"<<endl;
    else
        cout<<"Element Not Found"<<endl;
    
    return 0;
}