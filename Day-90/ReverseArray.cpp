#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string s = "hello";
    stack<char>st;
    // Push all characters into stack
    for(int i=0;i<s.size();i++) 
    {
        st.push(s[i]);
    }

    int i=0;
    // Pop characters from stack
    while(!st.empty()) 
    {
        s[i] = st.top(); // Get top character
        st.pop();       // Remove character
        i++;
    }
    cout<<s<<endl;

    return 0;
}