#include <iostream>
using namespace std;
int main() {
    int arr[18];
    float sum=0;
    cout<<"Enter 18 numbers:"<<endl;
    for(int i=0;i<18;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum/18<<endl;
    
    return 0;
}
