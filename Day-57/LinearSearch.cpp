#include <iostream>
using namespace std;
bool linearSearch(int arr[], int n, int index, int x){
    // Base case: we will check whole array
    if(index==n)
        return 0;

    //if we find the element
    if(arr[index]==x)
        return 1;

    // Recursion will call next index ke liye
    return linearSearch(arr,n,index+1,x);
}
int main(){
    int arr[]={2,4,7,3,11,8,12};
    int n=7;
    int x=8;


    cout<<linearSearch(arr,n,0,x);
    
    // if(linearSearch(arr,n,0,x))
    //     cout<<"Element got it";
    // else
    //     cout<<"Element do not got it";

    return 0;
}