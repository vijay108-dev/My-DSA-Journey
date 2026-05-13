// #include<iostream>
// #include<stack>
// using namespace std;
// stack<int>st1;
// stack<int>st2;
// void push(int x)
// {
//     if(st1.empty())
//     {
//         st1.push(x);
//         st2.push(x);
//     }
//     else
//     {
//         st1.push(x);
//         st2.push(min(x, st2.top()));
//     }
// }

// int pop()
// {
//     if(st1.empty())
//         return -1;
//     else
//     {
//         int element = st1.top();
//         st1.pop();
//         st2.pop();
//         return element;
//     }
// }

// int getmin()
// {
//     if(st2.empty())
//         return -1;
//     else
//         return st2.top();
// }

// int main(){
//     push(4);
//     push(3);
//     push(1);
//     push(2);
//     cout<<getmin()<<endl;
//     pop();
//     cout<<getmin()<<endl;

//     return 0;
// }


//------------------------------------------- METHOD = 2 ------------------------------------------------
#include<iostream>
#include<stack>
using namespace std;
stack<int>st1;
void push(int x)
{
    if(st1.empty())
        st1.push(x * 101 + x);

    else
        st1.push(x * 101 + min(x, st1.top() % 101));
}

int pop()
{
    if(st1.empty())
        return -1;

    else
    {
        int element = st1.top()/101;
        st1.pop();
        return element;
    }
}

int getmin()
{
    if(st1.empty())
        return -1;
    else
        return st1.top() % 101;
}

int main()
{
    push(4);
    push(3);
    push(1);
    push(2);
    cout<<getmin()<<endl;
    pop();
    cout<<getmin()<<endl;

    return 0;
}