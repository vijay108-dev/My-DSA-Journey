#include <iostream>
#include <vector>
using namespace std;
    int rowWithMax1s(vector<vector<int>> &arr){
        int n = arr.size();
        int m =arr[0].size();
        int i =0;
        int j =m - 1;
        int maxRowIndex =-1;
        
        while(i<n && j>=0){
            if(arr[i][j]==1){
                maxRowIndex=i; //update row index
                j--;// move left
            }
            else{
                i++;//move down
            }
        }
        return maxRowIndex;
    }
int main(){
    vector<vector<int>> arr = {
        {0,1,1,1},
        {0,0,1,1},
        {1,1,1,1},
        {0,0,0,0}
    };
    int result =rowWithMax1s(arr);
    if(result ==-1)
        cout<<"No row contains 1s"<<endl;
    else
        cout<<"Row with maximum 1s: " << result<<endl;
    
    return 0;
}

// Time c: O(n + m)
// Space c: O(1)