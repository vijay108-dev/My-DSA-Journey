// Print Table using while loop
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int i=1;

    while(i<=10){
        cout<<n*i<<endl;
        i++;
    }
    return 0;
}
