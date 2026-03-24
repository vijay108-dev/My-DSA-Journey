#include <iostream>
#include <vector>
using namespace std;
void parantheses(int n, int left, int right, vector<string> &ans, string &temp){

    //base case
    if(left+right == 2*n){
        ans.push_back(temp);
        return;
    }
    //left parenthesis
    if(left<n)
    {
        temp.push_back('(');
        parantheses(n, left + 1, right, ans, temp);
        temp.pop_back();
    }
    //right parenthesis
    if(right<left)
    {
        temp.push_back(')');
        parantheses(n, left, right + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    int n=3;
    vector<string> ans;
    string temp;

    parantheses(n, 0, 0, ans, temp);
    //it will print
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
//TC=O(2ⁿ ·n)
//SC=O(2ⁿ ·n)