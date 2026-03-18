#include <iostream>
using namespace std;
int countWays(int n){
    //base Cases
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    if(n==2)
    return 2;
    //Recursive Case
    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Total ways: "<<countWays(n)<<endl;

    return 0;
}