#include <iostream>
#include <stack>
using namespace std;
class Queue 
{
    stack<int>st1,st2;

public:
    // Push
    void push(int x) 
    {
        st1.push(x);
    }

    // Pop
    void pop() 
    {
        if(st1.empty() && st2.empty()) 
        {
            cout<<"Queue Empty\n";
            return;
        }

        if(st2.empty()) 
        {
            while(!st1.empty()) 
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        cout<<"Popped: " <<st2.top()<<endl;
        st2.pop();
    }

    // Peek
    int peek() 
    {
        if(st1.empty() && st2.empty()) 
        {
            return -1;
        }

        if(st2.empty()) 
        {
            while(!st1.empty()) 
            {
                st2.push(st1.top());
                st1.pop();
            }
        }

        return st2.top();
    }

    // Empty
    bool empty() 
    {
        return st1.empty() && st2.empty();
    }
};

int main() {

    Queue q;
    q.push(6);
    q.push(10);
    q.push(13);
    q.push(15);
    cout<<"Front: " <<q.peek()<<endl;
    q.pop();
    q.pop();
    cout<<"Front: " <<q.peek()<<endl;
    cout<<"Empty: "<<q.empty()<<endl;

    return 0;
}