#include<iostream>
#include<vector>
using namespace std;
vector<int> bracketNumbers(string s) 
{

    vector<int>ans;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        // Opening bracket
        if(s[i]=='(') 
        {
            count++;
            ans.push_back(count);
        }

        // Closing bracket
        else if(s[i]==')') 
        {
            ans.push_back(count);
            count--;
        }
    }
    return ans;
}

int main() {

    string s = "(aa(bdc))p(dee)";
    vector<int> result=bracketNumbers(s);
    for(int i=0;i<result.size();i++) 
    {
        cout<<result[i]<<" ";
    }

    return 0;
}