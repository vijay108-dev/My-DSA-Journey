#include <iostream>
using namespace std;
int count(string str, int index){
    //Base case
    if(index<0)
        return 0;
    //vowel check
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u' ||str[index]=='A' || str[index]=='E' || str[index]=='I' ||str[index]=='O' || str[index]=='U'){
        return 1 +count(str, index-1);
    }else{
        return count(str, index-1);
    }
}
int main(){
    string str="vijay";
    cout<<count(str,str.length()-1);

    return 0;
}