#include <iostream>
#include <vector>
#include <string>
using namespace std;
    vector<int> buildLPS(string &pat){
        int m = pat.size();
        vector<int> lps(m,0);
        int pre =0;
        int suf =1;
        while(suf<m){
            if(pat[pre]==pat[suf]){
                lps[suf]=pre + 1;
                pre++;
                suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
        return lps;
    }


    int strStr(string haystack, string needle)
    {
        int n =haystack.size();
        int m =needle.size();
        vector<int>lps=buildLPS(needle);

        int i=0;//haystack pointer
        int j=0;// needle pointer
        while(i<n){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            if(j==m){
                return i-j;//first occurrence index
            }

            else if(i<n && haystack[i] != needle[j]){
                if(j==0){
                    i++;
                }
                else{
                    j=lps[j-1];
                }
            }
        }
        return -1;
    }
int main() {
    string haystack="aadbutsad";
    string needle="sad";
    cout<<strStr(haystack,needle)<<" ";

    return 0;
}
// Time complexity = O(n + m)
// Space complexity = O(m)