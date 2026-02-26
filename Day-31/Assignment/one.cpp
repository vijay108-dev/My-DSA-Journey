#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows=3,cols=3;
    for(int j=0;j<cols; j++){
        int sum =0;
        for(int i=0;i<rows;i++){
            sum+= matrix[i][j];
        }
        cout<<"Sum of column " <<j<<" = "<<sum<<endl;
    }
    return 0;
}
//output
// Sum of column 0 = 12
// Sum of column 1 = 15
// Sum of column 2 = 18