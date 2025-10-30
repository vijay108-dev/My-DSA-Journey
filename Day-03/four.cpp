#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int a=13;
    int b=-16;
    
    cout<<"13 in 5 bits:"<<bitset<5>(a & 0b11111)<<endl;
    cout<<"-16 in 5 bits:"<<bitset<5>(b & 0b11111)<<endl;

    return 0;
}
