#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,6,4,3,8,5,1};
    int n=7;
    int maxi=INT_MIN;
    int secondMax=INT_MIN;
    // 1st loop: find maximum
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }

    // 2nd loop: find second maximum
    for(int i=0;i<n;i++){
        if(arr[i]>secondMax && arr[i]<maxi) 
        {
            secondMax=arr[i];
        }
    }
    cout<<"Second Maximum = "<<secondMax<<endl;

    return 0;
}
