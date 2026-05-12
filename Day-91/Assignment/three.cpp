#include <iostream>
#include <stack>
using namespace std;
string removeKdigits(string s, int k)
{
    stack<char>st;

    for(int i=0;i<s.size();i++)
    {
        while(!st.empty() && k>0 && st.top()>s[i])
        {
            st.pop();
            k--;
        }
        st.push(s[i]);
    }

    while(k>0)
    {
        st.pop();
        k--;
    }
    string ans="";
    while(!st.empty())
    {
        ans=st.top()+ans;
        st.pop();
    }

    int index=0;
    while(index<ans.size() && ans[index]=='0')
    {
        index++;
    }
    ans = ans.substr(index);
    if(ans=="")
    {
        return "0";
    }
    return ans;
}

int main(){
    string s ="4325043";
    int k=3;
    cout<<removeKdigits(s,k)<<endl;

    return 0;
}