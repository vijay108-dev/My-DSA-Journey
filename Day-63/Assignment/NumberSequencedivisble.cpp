#include <iostream>
using namespace std;
int countSubseq(string s, int index, int n, int rem){
    // base case
    if(index==s.size())
    {
        if(rem==0)
            return 1;
        return 0;
    }
    int digit=s[index]-'0';

    // exclude + include
     return countSubseq(s, index+1, n, rem) + countSubseq(s, index+1, n,(rem *10+digit)%n);
}
int main(){
    string s="1234";
    int n=4;
    // -1 to remove empty subsequence
    cout<<"Total subsequences: "<<countSubseq(s, 0, n, 0)-1;

    return 0;
}
//TC = O(2^n)
//SC = O(n)