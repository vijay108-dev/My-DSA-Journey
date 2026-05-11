#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) 
{
    stack<char>st;
    for(int i=0;i<s.size();i++) 
    {
        // Opening brackets
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') 
        {
            st.push(s[i]);
        }

        // Closing brackets
        else 
        {
            // Stack empty
            if (st.empty()) 
            {
                return false;
            }

            // ()
            else if(s[i] == ')') 
            {
                if(st.top() == '(') 
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }

            // {}
            else if(s[i] == '}') 
            {
                if (st.top() == '{') 
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }

            // []
            else if(s[i] == ']') 
            {
                if (st.top() == '[') 
                {
                    st.pop();
                }
                else 
                {
                    return false;
                }
            }
        }
    }

    // Final check
    if (st.empty()) 
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main() 
{
    string s="([])";
    if(isValid(s)) 
    {
        cout<<"true"<<endl;
    }
    else 
    {
        cout<<"false"<<endl;
    }

    return 0;
}