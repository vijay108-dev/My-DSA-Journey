#include <iostream>
using namespace std;
int main() {
    int n = 4;
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int k;
    cout<<"Enter number of rotations (90° each): ";
    cin>>k;
    k=k % 4; // 4 rotations = original matrix

    while(k--){
        // Transpose
        for(int i = 0;i< n;i++){
            for(int j=i+1; j<n; j++) {
                swap(arr[i][j],arr[j][i]);
            }
        }

        // Reverse each row
        for(int i=0;i<n; i++){
            for(int j = 0, l = n-1; j<l;j++,l--){
                swap(arr[i][j], arr[i][l]);
            }
        }
    }

    // Print rotated matrix
    cout<<"Rotated Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j =0;j <n;j++){
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}