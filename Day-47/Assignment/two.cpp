#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(const char *str){
    int left=0;
    int right=strlen(str) - 1;
    // Check for palindrome
    while(left<right) {
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main(){
    const char *palindrome1="MOM";
    const char *palindrome2="Vijay";
    if(isPalindrome(palindrome1))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

    cout<<endl;

    if(isPalindrome(palindrome2))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;

cout<<endl;

    return 0;
}