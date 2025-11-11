#include <iostream>
using namespace std;

int main(){
    int i=1;

    while(i<=10){
        if(i==4){
            i++;        // First increment it otherwise it will create an infinite loop
            continue;   // skip 4
        }
        cout<<i<<endl;
        i++;
    }

    return 0;
}
