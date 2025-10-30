#include <iostream>
#include <bitset>
using namespace std;
int main(){
    int a=3;
    int b=-6;
    
    cout<<"3 in 4 bits:"<<bitset<4>(a & 0b1111)<<endl;
    cout<<"-6 in 4 bits:"<<bitset<4>(b & 0b1111)<<endl;

    return 0;
}
