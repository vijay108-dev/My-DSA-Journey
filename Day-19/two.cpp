#include <iostream>
using namespace std;
int main(){
    int arr[]={10,4,8,2,1};
    int n=5;
    for (int i=n-1;i>0;i--){
        int index=0;// max element ka index
        for (int j=1;j<=i;j++) 
        {
            if (arr[j]>arr[index])
             {
                index = j;
            }
        }

        // swap max element with last position
        swap(arr[index],arr[i]);
    }
    for (int i=0;i<n;i++) 
    {
        cout<< arr[i]<<" ";
    }

    return 0;
}

