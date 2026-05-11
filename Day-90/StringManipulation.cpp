#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int stringManipulation(vector<string> arr) 
{
    stack<string> s;
    for(int i=0;i<arr.size();i++) 
    {
        // If stack is empty
        if (s.empty()) 
        {
            s.push(arr[i]);
        }

        // Same words
        else if(s.top()==arr[i]) 
        {
            s.pop();
        }

        // Different words
        else 
        {
            s.push(arr[i]);
        }
    }
    return s.size();
}
int main() 
{
    vector<string>arr= {"ab", "aa", "aa", "bcd", "ab"};
    cout<<stringManipulation(arr)<<endl;

    return 0;
}