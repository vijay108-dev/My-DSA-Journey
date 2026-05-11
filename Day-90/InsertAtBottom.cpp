#include<iostream>
#include<stack>
using namespace std;
stack<int> insertAtBottom(stack<int> st, int x) 
{
    stack<int> temp;
    // Move all elements into temp stack
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    // Insert x at bottom
    st.push(x);

    // Move elements back
    while(!temp.empty()) 
    {
        st.push(temp.top());
        temp.pop();
    }
    return st;
}

int main() 
{

    stack<int> st;
    // Stack elements
    st.push(8);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int x = 2;
    st=insertAtBottom(st,x);
    // Print stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}