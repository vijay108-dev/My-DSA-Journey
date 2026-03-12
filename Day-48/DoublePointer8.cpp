#include<iostream>
using namespace std;
int main(){
    int n =10;
    int *p = &n;
    int **q =&p;
    cout<<p<<endl; //0x16afb6bb8

    return 0;
}