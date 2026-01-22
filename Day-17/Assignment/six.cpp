#include <iostream>
using namespace std;
int main() {
    int arr[]={5,9,1,3,10,3};
    int n=6;
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        bool unique = true;

        for(int j=0;j<n;j++) 
        {
            if (i != j && arr[i]==arr[j])
             {
                unique=false;
                break;
            }
        }

        if(unique)
            sum+=arr[i];
    }

    cout<<sum<<endl;
    
    return 0;
}
