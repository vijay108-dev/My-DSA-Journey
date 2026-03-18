#include <iostream>
using namespace std;
int climbStairs(int n){
    //Base Case
    // if(n==0 || n==1)
          //or
    if(n<=1)      
    return 1;

    //Recursive Case
    return climbStairs(n-1) + climbStairs(n-2);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Ways are to climbStairs: " <<climbStairs(n)<<endl;

    return 0;
}