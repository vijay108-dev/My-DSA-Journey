#include <iostream>
#include <vector>
using namespace std;
    int countZeros(vector<vector<int>> A){
        int n = A.size();
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i<n && j>=0){
            if(A[i][j]==0){
                count+= (j + 1);//0 se j tak sab zero
                i++;//niche jao
            }
            else{
                j--;//left jao
            }
        }
        return count;
    }
int main(){
    vector<vector<int>> A = {
        {0,0,0,0,1},
        {0,0,0,1,1},
        {0,0,1,1,1},
        {0,1,1,1,1},
        {1,1,1,1,1}
    };
    int result = countZeros(A);
    
    cout<<"Total Zeros: "<<result<<endl;
    
    return 0;
}
//Time complexity: O(N)
//Space complexity: O(1)