#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<int> computeLPS(string pat)
{
    int n = pat.size();
    vector<int> lps(n,0);
    int pre = 0;

    for(int i=1;i<n;i++)
    {
        while(pre>0 && pat[i]!=pat[pre])
            pre = lps[pre-1];

        if(pat[i]==pat[pre])
            pre++;

        lps[i] = pre;
    }

    return lps;
}

bool circularMatch(string str1,string str2)
{
    string text=str1+str1;
    vector<int> lps = computeLPS(str2);

    int i=0,j=0;
    while(i<text.size())
    {
        if(text[i]==str2[j])
        {
            i++;
            j++;
        }

        if(j==str2.size())
            return true;

        else if(i<text.size() && text[i]!=str2[j])
        {
            if(j==0)
                i++;
            else
                j = lps[j-1];
        }
    }
    return false;
}

int main()
{
    string str1="cdeabroab";
    string str2="abcde";
    if(circularMatch(str1,str2))
        cout<<"Match Found"<<endl;
    else
        cout<<"No Match"<<endl;
}