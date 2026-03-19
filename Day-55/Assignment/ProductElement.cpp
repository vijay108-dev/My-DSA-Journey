#include <iostream>
using namespace std;
int findProduct(int arr[], int index, int n){
    if(index==n)
        return 1;
    return arr[index]*findProduct(arr,index+1,n);
}
int main(){
    int arr[]={3,4,1,2,8};
    int n=5;
    cout<<findProduct(arr, 0, n);

    return 0;
}