// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={3, 4, -2, 5, 8, 20, -10, 8};
//     int n=8;
//     for(int i=0;i<n-1;i++){
//         int sum1=0, sum2=0;
//         for(int j=0;j<=i;j++)
//             sum1+=arr[j];
//         for(int j=i+1;j<n;j++)
//             sum2+=arr[j];
//         if(sum1==sum2){
//             cout<< "Equal partition at index: "<<i<<endl;
//             cout<< "Sum1 = " << sum1 << endl;
//             cout<< " Sum2 = " << sum2 << endl;
//         }
//     }

//     // cout << "No equal partition found"<<endl;
    
// }
//TC = O(n^2)



//Method = 2

#include <iostream>
using namespace std;
int equalPartition(int arr[], int n)
 {
    int totalSum=0;
    for(int i=0;i<n;i++)
        totalSum+=arr[i];
    int prefix=0;
    for(int i =0;i <n-1;i++){
        prefix+= arr[i];
        if(prefix==totalSum-prefix) {
            return 1;//found
        }
    }
    return 0;//not found
}

int main(){
    int arr[] = {3, 4, -2, 5, 8, 20, -10, 8};
    int n=8;
    cout<<equalPartition(arr, n)<<endl;   
}
//TC = O(n)