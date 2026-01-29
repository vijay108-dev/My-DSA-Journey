#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start=0, end = n;
    int ans=0;
    while (start<=end) 
    {
        long long mid=start+(end-start)/2;

        if(mid *mid*mid==n){
            ans =mid;
            break;
        }
        else if(mid * mid * mid<n){
            ans =mid; // possible answer
            start=mid + 1;
        }
        else{
            end=mid-1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
