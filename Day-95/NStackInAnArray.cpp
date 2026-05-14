#include<iostream>
#include<stack>
using namespace std;
class NStack{
    public:
    int *arr;      // Original data
    int *Top;      // Top element's index
    int *next;     // Next index
    stack<int>st; // Empty index stack
    int n ,s;
    NStack(int N,int S)
    {
        n = N;
        s = S;
        arr = new int[S];
        Top = new int[N];
        next = new int[S];
        for(int i=0;i<N ;i++)
        {
            Top[i]=-1;
        }
        for(int i=0;i<S;i++)
        {
            st.push(i);
        }
    }
    bool push(int x , int m)
    {
        if(st.empty())
        {
            cout<<"Stack Overflow"<<endl;
            return 0;
        }

        int index = st.top();
        st.pop();
        arr[index] = x;
        next[index] = Top[m-1];
        Top[m-1] = index;
        return 1;
    }

    int pop(int m)
    {
        if(Top[m-1] == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }

        int index = Top[m-1];
        Top[m-1] = next[index];
        st.push(index);
        return arr[index];
    }
};

int main(){
    NStack s(3,10);

    s.push(10,1);
    s.push(20,1);
    s.push(30,2);
    s.push(40,3);
    cout<<s.pop(1)<<endl;
    cout<<s.pop(2)<<endl;
    cout<<s.pop(3)<<endl;

    return 0;
}

// Time Complexity
// Push -> O(1)
// Pop -> O(1)
// Space Complexity =  O(N+S)