#include <iostream>
using namespace std;
int reverseNum(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n= n/10;
    }
    return rev;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reversed = "<<reverseNum(n);
    return 0;
}
