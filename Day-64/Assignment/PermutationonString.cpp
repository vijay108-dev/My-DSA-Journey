#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void permut(string &s, int index, vector<string> &ans)
{
    //base case
    if(index==s.size())
    {
        ans.push_back(s);
        return;
    }
    for (int i=index;i<s.size();i++)
    {
        // skip duplicates
        bool skip=false;
        for (int j=index;j<i;j++)
        {
            if(s[j]==s[i])
            {
                skip=true;
                break;
            }
        }
        if(skip)
         continue;

        swap(s[i],s[index]);      // fix character
        permut(s, index+1, ans);  // recursion
        swap(s[i], s[index]);     // backtrack
    }
}

int main(){
    string s = "AAB";   // try "ABC", "AAA", "ABSG"
    vector<string>ans;

    sort(s.begin(),s.end());  // important step

    permut(s,0,ans);

   for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<endl;
   }
  


    return 0;
}