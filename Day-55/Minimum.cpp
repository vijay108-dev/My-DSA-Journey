#include <iostream>
using namespace std;
int minelement(int arr[],int index,int n){
    //Base case
    if(index==n-1)
        return arr[index];

    //Recursive call+comparison
    return min(arr[index], minelement(arr, index+1, n));
}

int main(){
    int arr[]={3,4,1,2,8};
    int n=5;
    cout<<minelement(arr,0,5);

    return 0;
}