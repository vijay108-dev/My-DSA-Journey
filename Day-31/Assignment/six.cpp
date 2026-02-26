#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3, cols = 3;
    int smallest = matrix[0][0];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] <smallest)
                smallest=matrix[i][j];
        }
    }
    cout<<"Smallest element = "<<smallest<<endl;
    return 0;
}