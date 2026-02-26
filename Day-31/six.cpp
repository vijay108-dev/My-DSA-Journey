#include <iostream>
using namespace std;
int main(){
    int matrix[3][4] = {
        {2, 3, 4, 5},
        {1, 2, 6, 8},
        {4, 9, 3, 2}
    };

    int rows= 3;
    int cols= 4;

    //Har row ko start-end aur swap() se reverse karo
    for (int i = 0; i<rows; i++){
        int start=0;
        int end=cols - 1;
        while(start < end){
            swap(matrix[i][start], matrix[i][end]); // temp ki jarurat nahi
            start++;
            end--;
        }
    }

    // Result print karo
    for(int i= 0; i<rows;i++){
        for (int j=0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}

//TC =O(rows * cols)
//SC =O(1)