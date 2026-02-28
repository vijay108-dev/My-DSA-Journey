#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int target){
    
    int n =mat.size();
    int m =mat[0].size();
    int top= 0,bottom = n - 1;
    int row =-1;
    
    //Find the correct row
    while(top<=bottom){
        int mid =top+(bottom-top)/2;
        
        if(target>=mat[mid][0] && target<=mat[mid][m-1]){
            row =mid;
            break;
        }
        else if(target<mat[mid][0])
            bottom =mid - 1;
        else
            top=mid + 1;
    }
    
    if(row ==-1) 
    return false;
    
    //Binary search in that row
    int left =0, right = m-1;
    
    while(left<=right){
        int mid =left+(right-left)/2;
        
        if(mat[row][mid]==target)
            return true;
        else if(mat[row][mid]<target)
            left = mid+1;
        else
            right = mid-1;
    }
    
    return false;
}

int main(){
    vector<vector<int>> mat = {
        {1, 5, 9},
        {14, 20, 21},
        {30, 34, 43}
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