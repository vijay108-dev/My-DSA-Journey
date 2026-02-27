#include <iostream>
using namespace std;
int main(){
    int arr[6][6]={
        {1,  2,  3,  4,  5,  6},
        {7,  8,  9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };

    int n=6;
    int top =0;
    int bottom =n - 1;
    int left =0;
    int right= n - 1;

    while(top<=bottom && left<=right)
    {

        // Left → Right
        for(int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Top → Bottom
        for(int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Right → Left
        if(top <= bottom) {
            for(int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        //  Bottom → Top
        if(left <= right) {
            for(int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}