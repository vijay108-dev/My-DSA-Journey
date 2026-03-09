#include <iostream>
#include <vector>
#include <string>
using namespace std;
    void LPSfind(vector<int>& lps, string &pat){
        int pre=0;
        int suf=1;
        int m=pat.size();

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
                    pre = lps[pre-1];
                }
            }
        }
    }

    int KMP_Match(string haystack, string needle){

        int n=haystack.size();
        int m=needle.size();

        vector<int> lps(m,0);
        LPSfind(lps,needle);

        int first =0;
        int second= 0;

        while(first<n){

            if(haystack[first]==needle[second]){
                first++;
                second++;
            }
            else{
                if(second==0)
                    first++;
                else
                    second=lps[second-1];
            }

            if(second==m)
                return 1;
        }

        return 0;
    }

    int repeatedStringMatch(string a, string b) {

        if(a==b)
            return 1;

        int repeat =1;
        string temp =a;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }

        // KMP Pattern Search
        if(KMP_Match(temp,b)==1)
            return repeat;

        // Temp + a, KMP search
        if(KMP_Match(temp+a,b)==1)
            return repeat+1;

        return -1;
    }
int main(){
    string a,b;
    cout<<"Enter string a: "<<" ";
    cin>>a;

    cout<<"Enter string b: "<<" ";
    cin>>b;
    int ans=repeatedStringMatch(a, b);
    cout<<"Minimum repeats needed: "<<ans<<endl;

    return 0;
}
//TC = O(n+m)
//SC = O(m)