#include <iostream>
using namespace std;
int main(){

    int arr[4][4] = {
        {5, 8, 3, 9},
        {6, 2, 8, 4},
        {5, 3, 2, 2},
        {2, 8, 1, 9}
    };

    int row=4;
    int col=4;

    // primary diagonal
    int first= 0;

    for(int i=0;i<row;i++){
        first+= arr[i][i];
    }

    // secondary diagonal
    int second = 0;
    int i =0;
    int j= col - 1;

    while(j>=0){
        second += arr[i][j];
        i++;
        j--;
    }

    cout<< "Primary sum = "<<first<<endl;
    cout<< "Secondary sum = "<<second<<endl;

    return 0;
}