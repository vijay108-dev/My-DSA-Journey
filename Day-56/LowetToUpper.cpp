#include <iostream>
using namespace std;
void toUpperCase(string &str, int index){
    // Base case
    if(index==-1)
        return;
    //Convert using formula
    str[index] = 'A' + str[index] - 'a';
    // Recursive call
    toUpperCase(str, index-1);
}
int main(){
    string str="vijay";
    toUpperCase(str,5);
    cout<<str<<endl;
    return 0;
}