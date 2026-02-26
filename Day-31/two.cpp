#include <iostream>
using namespace std;
// function to search element
void searchElement(int arr[4][3], int rows, int cols, int x){
    for(int i=0;i< rows;i++){
        for(int j=0;j < cols;j++){
            if(arr[i][j]==x){
                cout<<"Element found at position: (" << i << ", " << j << ")"<<endl;
                return; // mil gaya to function yahin khatam
            }
        }
    }
    //agar pura loop chal gaya aur nahi mila
    cout<<"Element not found"<<endl;
}

int main(){
    int arr[4][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    int x;
    cout<<"Enter element to search: ";
    cin>>x;
    // function call
    searchElement(arr, 4, 3, x);

    return 0;
}