#include<iostream>
#include<stack>
using namespace std;
int minAddToMakeValid(string s) 
{
    stack<char>st;
    int count =0;
    for(int i=0;i<s.size();i++) 
    {
        // Opening bracket
        if (s[i]== '(') 
        {
            st.push(s[i]);
        }

        // Closing bracket
        else 
        {
            // Matching opening bracket exists
            if(!st.empty()) 
            {
                st.pop();
            }

            // No matching bracket
            else 
            {
                count++;
            }
        }
    }
    return count + st.size();
}

int main() 
{
    string s = "())";
    cout<<minAddToMakeValid(s)<<endl;

    return 0;
}