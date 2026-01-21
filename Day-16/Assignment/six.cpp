#include <iostream>
using namespace std;
int main(){
    int arr[]={12, 5, 8, 20, 3};
    int n=5;
    int first = arr[0], second=arr[1], third=arr[2];

    // first 3 we will do sort
    if(first > second) 
    swap(first, second);
    if(first > third) 
    swap(first, third);
    if(second > third) 
    swap(second, third);

    for(int i=3; i<n;i++) 
    {
        if(arr[i]<first){
            third =second;
            second= first;
            first= arr[i];
        }
        else if(arr[i] <second) 
        {
            third = second;
            second=arr[i];
        }
        else if(arr[i] <third) {
            third=arr[i];
        }
    }


    cout<<"Third smallest: "<<third<<endl;

    return 0;
}
