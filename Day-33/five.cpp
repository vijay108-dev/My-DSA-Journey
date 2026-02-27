#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n= 4;

    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    //Transpose
    for(int i = 0;i < n-1;i++){
        for(int j= i+1; j < n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //Reverse each column
    for(int j =0;j<n;j++){
        int start = 0;
        int end=n - 1;

        while(start<end){
            swap(arr[start][j], arr[end][j]);
            start++;
            end--;
        }
    }

    // Print thee  result
    cout<<"Rotated Matrix (90 degree anticlockwise):\n";
    for(int i = 0; i < n;i++){
        for(int j =0;j< n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}