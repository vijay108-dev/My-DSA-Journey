#include <iostream>
using namespace std;
class NStack{
public:
    int *arr;
    int Top1, Top2;
    int size;
    NStack(int n){
        arr = new int[n];
        size = n;
        Top1 = -1;
        Top2 = n;
    }
    void push1(int x)
    {
        if(Top1+1 == Top2)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        Top1++;
        arr[Top1] = x;
    }
    void push2(int x)
    {
        if(Top2-1 == Top1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }

        Top2--;
        arr[Top2] = x;
    }

    int pop1()
    {
        if (Top1==-1)
        {
            return -1;
        }
        int elem = arr[Top1];
        Top1--;
        return elem;
    }

    int pop2()
    {
        if (Top2 == size)
        {
            return -1;
        }

        int element = arr[Top2];
        Top2++;
        return element;
    }
};

int main()
{
    NStack st(10);

    st.push1(5);
    st.push1(10);
    st.push2(100);
    st.push2(200);
    cout<<"Pop from Stack1: "<<st.pop1()<<endl;
    cout<<"Pop from Stack2: "<<st.pop2()<<endl;

    return 0;
}