#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    
    {
        if(x<0)   // negative number are not palindrome
            return false;

        int original=x;
        long long rev=0;
        while (x!=0){
            int digit=x%10;
            rev=rev*10+digit;
            x/=10;
        }
        return rev==original;  // check
    }
};

int main(){
    Solution s;
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if (s.isPalindrome(x))
        cout << x<<" is a Palindrome"<< endl;
    else
        cout <<x << " is NOT a Palindrome" <<endl;



    return 0;
}
