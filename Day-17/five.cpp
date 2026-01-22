#include <iostream>
using namespace std;
int main() 
//IN fibonacci elements of first 2 are fixed
{
    int n;
    cout<<"Enter the number: ";
    cin>>n; // number of terms
    int arr[1000];
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i<n;i++) 
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    // print fibonacci series
    // for (int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //find the element at what position
    cout<<arr[n-1]<<endl;

    return 0;
}
