#include <iostream>
using namespace std;
int sumArray(int arr[],int n,int index){
    //Base case
    if(index==n)
        return 0;

    //Current + remaining
    return arr[index]+sumArray(arr, n, index+1);
}
int main(){
    int arr[]={3,7,6,2,8};
    int n=5;
    cout<<sumArray(arr, n, 0);

    return 0;
}