#include <iostream>
using namespace std;
void change(int *p){
    int x =50;
    p=&x;//sirf local pointer change hua
}
int main(){
    int a=10;
    int *ptr=&a;
    change(ptr);
    cout<<*ptr<<endl;  //10
}