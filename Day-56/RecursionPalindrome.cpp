#include <iostream>
using namespace std;
bool isPalindrome(string s, int start, int end){
    //Base case
    if(start>end)
        return 1;

    //Check characters
    if(s[start]!=s[end])
        return false;

    //Recursive call
    return isPalindrome(s, start+1, end-1);
}
int main(){
    string s;
    cout<<"Enter the String: "<<" ";
    cin>>s;
    if(isPalindrome(s, 0, s.length() - 1))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

    return 0;
}