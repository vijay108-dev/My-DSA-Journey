#include <iostream>
using namespace std;
int main(){
    //Print all Odd Numbers from 1 to n
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0)
            cout<<i<<" ";
    }

    return 0;
}
