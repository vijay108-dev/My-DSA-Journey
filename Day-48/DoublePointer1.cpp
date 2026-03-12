#include<iostream>
using namespace std;
//  void fun(int *p){
//         *p =*p+10;
//     }

 void fun(int *p){
        p++;
    }


int main(){
    int n = 10;
    int *p = &n; //single pointer
    int **p2 = &p; //Double Pointer

    // cout<<p<<endl; //0x16d0c6bb8
    // fun(p);
    // cout<<n<<" "; //20

    cout<<p<<endl; //0x16d0c6bb8
    fun(p);
    cout<<n<<" "; //10

    return 0;
}