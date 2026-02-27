#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){

    //Create 2 D Array

    int rows = 3;
    int cols = 4;

    vector<vector<int> > arr(rows, vector<int>(cols));

    //Input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }

    // Output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}