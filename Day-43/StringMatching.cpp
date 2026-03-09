// #include <iostream>
// #include <string>
// using namespace std;
// int strStr(string haystack, string needle){
//     int n=haystack.size();
//     int m=needle.size();
//     for(int i=0;i<=n - m;i++){
//         int first=i;
//         int second=0;

//         while(second<m){
//             if(haystack[first] != needle[second]){
//                 break;
//             }
//             first++;
//             second++;
//         }
//         if(second==m){
//             return i;//match found
//         }
//     }
//     return -1;
// }
// int main()
// {
//     string haystack="abcabdefg";
//     string needle="def";
//     cout<<strStr(haystack,needle)<<endl;
// }
//TC = O(NM)
//SC = O(1)

//Method = 2
#include <iostream>
#include <vector>
using namespace std;
    void buildLPS(vector<int>& lps, string &pat){
        int pre=0;
        int suf=1;
        int m=pat.size();
        while(suf<m){
            // Matched
            if(pat[pre]==pat[suf]){
                lps[suf]=pre + 1;
                pre++;
                suf++;
            }
            else{
                // Not matched
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
    int strStr(string haystack, string needle){

        int n=haystack.size();
        int m=needle.size();
        vector<int>lps(m,0);

        buildLPS(lps,needle);

        int first =0;
        int second= 0;

        while(first<n){

            //Match
            if(haystack[first]==needle[second]){
                first++;
                second++;
            }
            // Not match
            else{
                if(second==0)
                    first++;
                else
                    second=lps[second-1];
            }
            if(second==m)
                return first - second;
        }

        return -1;
    }

int main(){
    string haystack="sadbutsad";
    string needle="sad";
    int result=strStr(haystack, needle);
    cout <<"First occurrence index: "<<result<<endl;

    return 0;
}
// Time complexity = O(n + m)
// Space complexity = O(m)