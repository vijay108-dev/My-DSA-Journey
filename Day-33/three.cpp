#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    //          FIRST 90 DEGREE 
    // Transpose
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for(int i=0;i<n;i++){
        int start =0, end = n - 1;
        while(start <end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    //          SECOND 90 DEGREE 

    // Transpose again
    for(int i=0;i< n;i++){
        for(int j=i;j < n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    // Reverse each row again
    for(int i=0;i<n;i++){
        int start=0,end=n - 1;
        while(start<end){
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // Print result
    cout << "Rotated Matrix (180 degree):\n";
    for(int i= 0; i < n; i++){
        for(int j= 0; j < n;j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}