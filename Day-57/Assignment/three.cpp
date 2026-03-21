#include <iostream>
using namespace std;
void rotateRight(int arr[], int n, int index){
    if(index==0)
        return;
    swap(arr[index],arr[index-1]);

    rotateRight(arr,n,index-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    rotateRight(arr,n,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}