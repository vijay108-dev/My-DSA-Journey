#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==0||x==1) 
    {
        cout<<x;
        return 0;
    }
    int start = 0, end = x;
    int ans = 0;
    while (start <= end) 
    {
        long long mid= start+(end - start)/2;
        if (mid * mid==x){
            ans=mid;
            break;
        }
        else if(mid * mid< x){
            ans =mid;  // possible answer
            start= mid + 1;
        }
        else{
            end=mid - 1;
        }
    }

    cout<<ans<<endl;
    return 0;
}

//TC = O(logx)
//SC = O(1)