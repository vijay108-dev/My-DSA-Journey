#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(i%4==0)
            cout<<i<<" ";
    }

    return 0;
}
