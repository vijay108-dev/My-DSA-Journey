#include <iostream>
using namespace std;
int main(){
    int arr[5][4]={
        {3, 4, 7, 18},
        {2, 8, 3, 9},
        {5, 4, 2, 2},
        {7, 3, 0, 8},
        {2, 8, 9, 1}
    };

    int rows = 5;
    int cols = 4;

    int maxSum=INT_MIN;
    int index=-1;

    // find row with max sum
    for(int i = 0; i<rows;i++){
        int total =0;

        for(int j= 0; j <cols;j++){
            total+= arr[i][j];
        }

        if(total>maxSum){
            maxSum =total;
            index =i;
        }
    }

    cout<<"Row index with maximum sum: "<<index<<endl;
    cout<<"Maximum sum: " <<maxSum<<endl;

    return 0;
}