#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int celebrity(vector<vector<int>>& M, int n)
{
    stack<int>st;
    // Sabko stack me push karo
    for (int i=n-1; i>=0;i--)
        st.push(i);

    // Celebrity candidate nikalna
    while(st.size()>1)
    {
        int first=st.top();
        st.pop();

        int second=st.top();
        st.pop();

        // first knows second
        if(M[first][second] && !M[second][first])
            st.push(second);

        // second knows first
        else if(!M[first][second] && M[second][first])
            st.push(first);
    }

    // Agar stack empty ho gaya
    if(st.empty())
        return -1;

    int num=st.top();
    st.pop();

    int row=0,col=0;

    // Verify celebrity
    for(int i=0;i<n;i++){
        row+=M[num][i];
        col+=M[i][num];
    }

    return(row==0 && col==n-1) ? num:-1;
}

int main()
{
    vector<vector<int>>M =
    {
        {0,1,0,1,1},
        {0,0,0,1,0},
        {0,1,0,1,0},
        {0,0,0,0,0},
        {1,0,1,1,0}
    };
    int n=M.size();
    cout<<"Celebrity Index = " <<celebrity(M,n)<<endl;

    return 0;
}

// TC = O(n)
// SC = O(n)