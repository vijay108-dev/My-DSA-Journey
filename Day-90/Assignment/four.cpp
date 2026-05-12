// #include <iostream>
// #include <stack>
// using namespace std;
// int minAddToMakeValid(string s)
// {
//     stack<char>st;

//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='(')
//         {
//             st.push(s[i]);
//         }
//         else
//         {
//             if(!st.empty() && st.top()=='(')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 st.push(s[i]);
//             }
//         }
//     }

//     return st.size();
// }

// int main()
// {
//     string s;
//     cout<<"Enter the String: "<<endl;
//     cin>>s;
//     cout<<minAddToMakeValid(s)<<endl;

//     return 0;
// }

// TC: O(n)
// SC: O(n)

// ----------------------------------------------METHOD = 2 -----------------------------------------
#include <iostream>
using namespace std;
int minAddToMakeValid(string s)
{
    int openingBracket = 0;
    int requiredBracket = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            openingBracket++;
        }
        else
        {
            if(openingBracket>0)
            {
                openingBracket--;
            }
            else
            {
                requiredBracket++;
            }
        }
    }

    return openingBracket+requiredBracket;
}

int main()
{
    string s;
    cin>>s;
    cout<<"Enter the String: "<<endl;
    cout<<minAddToMakeValid(s)<<endl;

    return 0;
}

// TC: O(n)
// SC: O(1)