#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int ans[4][4]; //extra space (SC = O(n^2))
    // rotation logic
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n -1- i]=arr[i][j];
        }
    }

    // print rotated matrix
    cout << "Rotated Matrix (90 degree clockwise):\n";
    for(int i =0; i < n;i++){
        for(int j= 0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
//TC = O(N^2)
//SC = O(N^2)