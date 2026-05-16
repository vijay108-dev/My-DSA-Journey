#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() 
{
    queue<int>q;
    q.push(7);
    q.push(10);
    q.push(13);
    q.push(8);
    q.push(5);
    q.push(4);

    int k=3;
    stack<int>st;

    // Step 1
    while(k--) 
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2
    int n = q.size();

    while(!st.empty()) 
    {
        q.push(st.top());
        st.pop();
    }

    // Step 3
    while(n--) 
    {
        q.push(q.front());
        q.pop();
    }

    // Print Queue
    while(!q.empty()) 
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}