#include<iostream>
using namespace std;
int main()
{
//Minimum element in the array

    // int arr[5]={4,7,3,2,5};
    // int ans=INT_MAX;
    // for(int i=0;i<5;i++)
    // {
    //     if(arr[i]<ans)
    //         ans=arr[i];
    // }
    //     cout<<ans<<endl;//2


    

//Maximum element in the array

    int arr[5]={4,7,3,2,5};
    int ans=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
            ans=arr[i];
    }
        cout<<ans<<endl;


    return 0;
}