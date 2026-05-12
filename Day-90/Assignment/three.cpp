#include<iostream>
#include<stack>
using namespace std;
void insertAtCorrectPosition(stack<int>& st, int element)
{
    if(st.empty() || st.top()<=element)
    {
        st.push(element);
        return;
    }
    int topElement = st.top();
    st.pop();
    insertAtCorrectPosition(st, element);
    st.push(topElement);
}

void sortStack(stack<int>& st)
{
    if(st.empty())
    {
        return;
    }
    int topElement = st.top();
    st.pop();
    sortStack(st);
    insertAtCorrectPosition(st,topElement);
}
int main()
{
    stack<int>st;
    st.push(41);
    st.push(3);
    st.push(32);
    st.push(2);
    st.push(11);

    sortStack(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}