#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstZero=-1;
    int start=0, end =n-1;
    while (start<=end){
        int mid=start + (end-start)/2;
        if (arr[mid] ==0){
            firstZero= mid;
            end=mid - 1; //left side search
        }
        else{
            start= mid + 1;
        }
    }

    if(firstZero==-1)
        cout <<0<<endl;//no zero present
    else
        cout<<(n -firstZero)<<endl;

    return 0;
}
