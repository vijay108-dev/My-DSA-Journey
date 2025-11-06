#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;

    for(int row =1;row<=n;row++){
        char ch= 'A' + row - 1;  // A, B, C, D, E ...
        for(int col=1; col <= row;col++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
