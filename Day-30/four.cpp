#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> arr={1, 4, 6, 8, 10, -5};
    int n=arr.size();
    
    sort(arr.begin(),arr.end());

    for(int i =0; i < n-2;i++){
        int start= i +1;
        int end =n-1;

        while(start<end){
            int sum=arr[i] + arr[start] + arr[end];

            if(sum ==0){
                cout<<arr[i] << " "<< arr[start]<< " " << arr[end]<<endl;
                start++;
                end--;
            }
            else if(sum<0){
                start++;
            }
            else{
                end--;
            }
        }
    }
}