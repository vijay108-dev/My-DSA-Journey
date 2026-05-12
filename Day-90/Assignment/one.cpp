#include <iostream>
#include <stack>
using namespace std;
string makeString(string str)
{
    stack<char>st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == '#')
        {
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            st.push(str[i]);
        }
    }

    string ans = "";
    while(!st.empty())
    {
        ans = st.top()+ans;
        st.pop();
    }
    return ans;
}

bool backspaceCompare(string s, string t)
{
    string first = makeString(s);
    string second = makeString(t);
    return first == second;
}

int main()
{
    string s, t;
    cin>>s>>t;
    if(backspaceCompare(s,t))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}

// TC: O(n + m)
// SC: O(n + m)