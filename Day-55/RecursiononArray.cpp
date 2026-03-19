// #include <iostream>
// using namespace std;
// void printArray(int arr[], int n, int index)
// {
//     //Base case
//     if(index==n)
//         return;
//     //Print current element
//     cout<<arr[index]<<" ";
//     //Recursive call
//     printArray(arr,n,index+1);
// }
// int main()
// {
//     int arr[]={3,7,6,2,8};
//     int n=5;
//     printArray(arr,n,0);

//     return 0;
// }

#include <iostream>
using namespace std;
void printReverse(int arr[], int index){
    // Base case
    if(index<0)
        return;

    cout<<arr[index]<<" ";
    //Recursive call
    printReverse(arr,index-1);
}

int main()
{
    int arr[] = {3,7,6,2,8};
    int n=5;
    printReverse(arr, n-1);

    return 0;
}