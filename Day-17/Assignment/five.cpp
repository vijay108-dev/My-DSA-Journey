#include <iostream>
using namespace std;
int main(){
    int arr[]={1,5,3,4,3,5,6};
    int n=7;
    for (int i=0;i<n;i++) 
    {
        for (int j=i+1;j<n;j++)
         {
            if (arr[i] == arr[j]) 
            {
                cout<<arr[i];
                return 0;
            }
        }
    }

    cout<<-1<<endl;
    
    return 0;
}
