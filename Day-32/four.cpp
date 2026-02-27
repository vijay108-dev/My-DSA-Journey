#include <iostream>
using namespace std;
int main(){
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int n= 4;
    for(int i =0;i<n; i++){
        for(int j = i +1;j<n;j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Print result
    cout<<"Transpose Matrix:"<<endl;
    for(int i=0; i<n; i++){
        for(int j = 0; j < n;j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}