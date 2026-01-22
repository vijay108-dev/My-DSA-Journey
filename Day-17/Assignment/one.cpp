#include <iostream>
using namespace std;
int main() {
    int arr[]={1,5,3,6,4};
    int n=5;
    for(int i=1;i<=n+1;i++) 
    {
        bool found = false;

        for(int j= 0;j< n;j++)
        {
            if(arr[j] ==i){
                found =true;
                break;
            }
        }

        if (!found){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
