#include <iostream>
#include <cmath>
using namespace std;
void updateValues(int *a,int *b){
    *a+=*b;
    *b= abs(*a-2*(*b));
}
int main(){
    int x=5,y=3;
    updateValues(&x, &y);
    cout<<x<<" "<<y<<" "; //8 2 %    
    return 0;
}