#include <iostream>
using namespace std;
int main(){

    // int arr[]={6,11,7,4,8,9};
    // int n=6;
    // int rev[6];
    // int i=n-1;
    // int j=0;
    // while (i>=0){
    //     rev[j] = arr[i];
    //     i--;
    //     j++;
    // }
    // // print reversed array
    //  for (int k=0;k<n;k++){
    //     cout<<rev[k] << " ";
    // }


    //Method = 2
    int arr[]={6,11,7,4,8,9};
    int n=6;
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    // print reversed array
    for (int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}
