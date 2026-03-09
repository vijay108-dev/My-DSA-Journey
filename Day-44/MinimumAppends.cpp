#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void makeLPS(vector<int>& lps, string &pat)
{
    int pre=0;
    int suf=1;
    while(suf<pat.size())
    {
        if(pat[pre]==pat[suf])
        {
            lps[suf]=pre+1;
            pre++;
            suf++;
        }
        else
        {
            if(pre ==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre -1];
            }
        }
    }
}
int minAppendPalindrome(string s)
{
    string rev=s;
    reverse(rev.begin(),rev.end());
    string str =rev+ "$"+s;

    int n=str.size();
    vector<int>lps(n,0);
    makeLPS(lps,str);

    return s.size()-lps[n-1];
}
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    int ans = minAppendPalindrome(s);
    cout<<"Minimum characters to append: "<<ans<<endl;

    return 0;
}
//TC =O(N)
//SC = O(N)