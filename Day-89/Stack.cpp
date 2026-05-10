#include<iostream>
using namespace std;
// Implement Stack using Array
class Stack{
    int *arr;
    int size;
    int top;

public:

    // Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<" Stack Overflow"<<endl;
            return;
        }
        else
        {
        top++;
        arr[top] = value;
        cout<<" Pushed "<<value<<" into the Stack\n";
        }
    }

    // Pop
    void pop()
    {
        if(top==-1)
        {
            cout<<" Stack Underflow "<<endl;
            return;
        }
        else
        {
        cout<<" Poped "<<arr[top]<<" from the Stack\n";    
        top--;
        }
    }

    // Peek
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        else
        {
        return arr[top];
        }
    }

    // isEmpty
    bool isEmpty()
    {
        return top == -1;
    }

    // IsSize
    int IsSize()
    {
        return top+1;
    }

    // // Display
    // void display()
    // {
    //     if(top == -1)
    //     {
    //         cout << "Stack is Empty" << endl;
    //         return;
    //     }

    //     for(int i = top; i >= 0; i--)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }

    // // Destructor
    // ~Stack()
    // {
    //     delete[] arr;
    // }
};

int main(){

    Stack S(5);

    S.push(10);
    S.push(20);
    S.push(30);
    S.pop();

    cout<<S.peek()<<endl;

    cout<<S.isEmpty()<<endl;


    return 0;
}