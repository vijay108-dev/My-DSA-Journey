#include <iostream>
using namespace std;
int main(){
    int arr[]={2,7,9,6,4};
    int n=5;
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++) 
        {
            if(arr[j] > arr[index])//for decreasing
            {   
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
