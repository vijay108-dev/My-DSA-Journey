#include <iostream>
using namespace std;
bool isPerfectSquare(int num) 
{
    //Negative numbers are not perfect square n
    if(num<0) 
    return false;
    long long start=0;
    long long end=num;
    while(start<=end){
        long long mid = start +(end-start)/2;
        long long square=mid*mid;
        if(square==num){
            return true;
        }
        else if(square<num){
            start=mid+1;
        }
        else{
            end =mid-1;
        }
    }
    return false;
}
int main(){
    int num;
    cout<<"Enter a number: "<<" ";
    cin>>num;

    if(isPerfectSquare(num)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}
