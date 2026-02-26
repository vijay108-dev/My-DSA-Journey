#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3, cols = 3;
    int largest=matrix[0][0];

    for(int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] > largest)
                largest = matrix[i][j];
        }
    }
    cout<<"Largest element = "<<largest<<endl;
    return 0;
}