#include <iostream>
using namespace std;

void printMsg(int n){
    for (int i =0;i <n;i++){
        cout<<"Hello Coder Army"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter how many times: ";
    cin>>n;
    printMsg(n);
    return 0;
}
