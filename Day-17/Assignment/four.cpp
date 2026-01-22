#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    int x=2,y=5;
    int ix = -1,iy = -1;
    for (int i=0;i<n;i++) 
    {
        if(arr[i]==x)
         ix =i;
        if(arr[i] == y) 
        iy=i;
    }

    if(ix==-1 || iy==-1)
        cout<<-1;
    else
        cout<<(ix > iy ? ix - iy : iy - ix)-1;

    return 0;
}
