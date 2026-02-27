#include <iostream>
using namespace std;
int main(){

    int arr[4][4]={
        {3, 7, 9, 17},
        {6, 8, 3, 8},
        {4, 11, 2, 5},
        {2, 5, 1, 9}
    };

    int rows =4;
    int cols =4;

    for(int j=0;j<cols;j++){

        // Even column =>top to bottom
        if(j%2==0){
            for(int i = 0; i < rows;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        // Odd column => bottom to top
        else{
            for(int i = rows-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

    return 0;
}

