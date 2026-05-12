#include <iostream>
#include <stack>
using namespace std;
class SpecialStack
{
    stack<int>st;
    stack<int>mini;

public:
    void push(int val)
    {
        st.push(val);
        if(mini.empty() || val<=mini.top())
        {
            mini.push(val);
        }
    }
    void pop()
    {
        if(st.empty())
        {
            return;
        }

        if(st.top() == mini.top())
        {
            mini.pop();
        }

        st.pop();
    }

    int getMin()
    {
        if(mini.empty())
        {
            return -1;
        }

        return mini.top();
    }

    bool isEmpty()
    {
        return st.empty();
    }
};

int main()
{
    SpecialStack s;
    s.push(18);
    s.push(19);
    s.push(29);
    s.push(15);
    s.push(16);
    cout<<s.getMin()<<endl;

    return 0;
}