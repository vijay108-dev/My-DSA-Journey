#include <iostream>
using namespace std;
void swapNumbers(int* &p1, int* &p2){
    int* temp;
    temp=p1;
    p1=p2;
    p2=temp;
}
int main() {
    int first=10;
    int second=20;
    int* ptr1 =&first;
    int* ptr2 =&second;
    swapNumbers(ptr1,ptr2);

    cout<<*ptr1<<endl;   //20
    cout<<*ptr2<<endl;   //10

    return 0;
}