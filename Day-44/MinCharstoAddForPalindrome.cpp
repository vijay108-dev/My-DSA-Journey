// class Solution {
//   public:
//     int minChar(string &s) {
//         // reverse string
//         string rev=s;
//         reverse(rev.begin(), rev.end());
//         int size =s.size();

//         // new string banayenge
//         string str=s;
//         str +='$';  //separator
//         str +=rev;   //reverse add

//         // LPS array
//         int n = str.size();
//         vector<int>lps(n, 0);

//         int pre=0, suff=1;
//         while (suff<n){
//             // matched
//             if(str[pre]==str[suff]){
//                 lps[suff]=pre + 1;
//                 pre++;
//                 suff++;
//             }
//             else{
//                 if(pre==0) {
//                     lps[suff]=0;
//                     suff++;
//                 }
//                 else{
//                     pre=lps[pre-1];
//                 }
//             }
//         }
//         // answer
//         return size - lps[n-1];
//     }
// };
//TC = O(N)
//SC = O(N)


#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string startingPart(string s)
{
    string rev=s;
    reverse(rev.begin(), rev.end());
    string str=s+"$"+rev;

    int n=str.size();
    vector<int>lps(n,0);

    int pre=0;
    for(int i=1;i<n;i++)
    {
        while(pre>0 && str[i]!=str[pre])
            pre = lps[pre-1];

        if(str[i]==str[pre])
            pre++;

        lps[i] = pre;
    }

    int add = s.size()-lps[n-1];

    // original string ka starting part
    return s.substr(0, add);
}

int main()
{
    string s="rkaactoaaa";
    cout<<startingPart(s)<<endl;
}
//TC = O(N)
//SC = O(N)