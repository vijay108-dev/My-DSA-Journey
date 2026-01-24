#include <iostream>
using namespace std;
int main() {
    int arr[]={10,3,28,2,1};
    int n=5;
    for(int i=n-1;i>0;i--)
    {
        int index = 0;
        for(int j=1;j<=i;j++) 
        {
            if(arr[j]>arr[index]) 
            {
                index=j;
            }
        }
        swap(arr[index],arr[i]);//max goes to last
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
