#include <iostream>
using namespace std;
int main(){
    int arr[]={-2,-6,10,-4,5};
    int n=5;
    int temp[5];
    int k=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            temp[k++]=arr[i];
    }

    for (int i=0;i<n;i++)
     {
        if (arr[i]<0)
            temp[k++]=arr[i];
    }

    for(int i=0;i<n;i++)
        cout<<temp[i]<< " ";

    return 0;
}
