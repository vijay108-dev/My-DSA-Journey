#include <iostream>
using namespace std;
int main() {
    int A[2][2] = { {1, 2}, {3, 4} };
    int B[2][2] = { {5, 6}, {7, 8} };
    int rows = 2, cols = 2;

    cout << "A - B = "<<endl;
    for(int i = 0; i<rows;i++){
        for(int j =0;j<cols; j++){
            cout << (A[i][j] - B[i][j]) << " ";
        }
        cout<<endl;
    }
    return 0;
}