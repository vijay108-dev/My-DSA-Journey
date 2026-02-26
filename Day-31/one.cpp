// #include <iostream>
// using namespace std;
// int main(){
// //create 2D array
// int arr[3][4] = {    
// {1, 2, 3, 4},
// {5, 6, 7, 8},
// {9, 10, 11, 12}
// };
// //Print all values row-wise
//     for(int row=0;row<3;row++){
//         for(int col=0; col < 4; col++){
//             cout<<arr[row][col] << " ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
// function to print 2D array
void printArray(int arr[][4], int rows, int cols) {
    for(int row = 0; row < rows; row++) {
        for(int col = 0; col < cols; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    // create 2D array
    int arr[3][4]={    
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    printArray(arr, 3, 4);

    return 0;
}