#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,2,2,4};
    int n=6;
    int x=2;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == x)
            count++;
    }

    cout <<count<< endl;
    return 0;
}
