// #include <iostream>
// using namespace std;
// void reverseString(string str, int index){
//     //Base case
//     if(index<0)
//         return;
//     //Print current character
//     cout<<str[index];

//     //Recursive call
//     reverseString(str, index-1);
// }
// int main(){
//     string str="vijay";
//     reverseString(str, str.length()-1);

//     return 0;
// }

//you cand do with the help of start or end also


#include <iostream>
using namespace std;
void reverseString(string &str, int start, int end){
    //Base case
    if(start>=end)
        return;

    //Swap
    char a=str[start];
    str[start]=str[end];
    str[end]=a;

    //Recursive call
    reverseString(str, start+1, end-1);
}
int main(){
    string str="vijay";
    reverseString(str, 0, str.length()-1);
    cout<<str;
    return 0;
}