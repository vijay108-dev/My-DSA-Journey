#include <iostream>
#include <vector>
#include <string>
using namespace std;
int longestKSubstr(string s, int k) {
    vector<int> count(26,0);
    int first =0;
    int second= 0;
    int distinct = 0;
    int len =-1;

    while(second < s.size()){

        int idx =s[second]-'a';
        count[idx]++;

        if(count[idx]==1)
            distinct++;

        // shrink window if distinct > k
        while(distinct>k){
            count[s[first] - 'a']--;

            if (count[s[first] - 'a']==0)
                distinct--;
            first++;
        }

        //update answer
        if(distinct==k)
            len=max(len, second - first + 1);
        second++;
    }
    return len;
}

int main(){
    string s="aabacbebebe";
    int k=3;
    int ans=longestKSubstr(s, k);

    cout<<"Longest substring length with "<<k<<" distinct characters is: "<<ans<<endl;
    return 0;
}
//TC = O(N)
//SC = O(26)