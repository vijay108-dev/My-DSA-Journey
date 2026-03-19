#include <iostream>
using namespace std;
int findMax(int arr[], int index, int n){
    if(index==n-1)
    return arr[index];
    return max(arr[index],findMax(arr,index+1,n));
}
int main(){
    int arr[]={3,4,1,2,8};
    int n=5;
    cout<<findMax(arr, 0, 5);

    return 0;
}