#include <iostream>
using namespace std;
int main() 
{
    int arr[]={1,3,4,5,6};
    int n=6;  
    int sumArr=0;
    // sum of array elements
    for (int i=0;i<n-1;i++) 
    {
        sumArr+=arr[i];
    }
    // sum of first n natural numbers
    int totalSum=n*(n+1)/2;
    int missing=totalSum-sumArr;
    cout<<"Missing Number = "<<missing<<endl;

    return 0;
}
