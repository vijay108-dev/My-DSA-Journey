#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,7,11,8,4};
    int n=6;
    int x = 11;// element to find
    for(int i=0;i<n;i++){
        if(arr[i]==x)
         {
            cout<<"Element found at index "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
    
}
