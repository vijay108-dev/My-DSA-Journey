#include <iostream>
using namespace std;
void change(int* &p){
    int x=50;
    p=&x;//original pointe will change
}
int main(){
    int a=10;
    int *ptr=&a;
    change(ptr);
    cout<<*ptr<<endl;   //50
}