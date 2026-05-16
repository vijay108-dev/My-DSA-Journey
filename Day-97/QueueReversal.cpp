#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() 
{
    queue<int>q;
    q.push(3);
    q.push(7);
    q.push(11);
    q.push(8);
    q.push(9);
    stack<int>st;

    // Queue -> Stack
    while(!q.empty()) 
    {
        st.push(q.front());
        q.pop();
    }

    // Stack -> Queue
    while(!st.empty()) 
    {
        q.push(st.top());
        st.pop();
    }

    // Print reversed queue
    while(!q.empty()) 
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}