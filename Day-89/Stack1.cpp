#include<iostream>
using namespace std;
// Node Class
class Node{
public:
    int data;
    Node* next;

    // Constructor
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Stack Class
class Stack{
    Node *top;
    int size;  //Actual size of Stack

public:

    // Constructor
    Stack()
    {
        top = NULL;
        size = 0;
    }

    // Push Function
    void push(int value)
    {
        Node *temp = new Node(value);
        temp->next = top;
        top = temp;
        size++;
        cout<<"Pushed "<<value<<" into the stack\n";
    }

    // Pop Function
    void pop()
    {
        if(top == NULL)
        {
            cout<< "Stack Underflow" <<endl;
            return;
        }
        else
        {
        Node *temp = top;
        cout<<"Popped "<<top->data<<" from the Stack\n";
        top = top->next;
        delete temp;
        size--;
        }
    }

    // Peek Function
    int peek()
    {
        if(top == NULL)
        {
            cout<< "Stack is Empty" <<endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }

    // isEmpty Function
    bool isEmpty()
    {
        return top == NULL;
    }

    //IsSize
    int IsSize()
    {
        return size;
    }
};   

int main(){

    Stack S;

    S.push(10);
    S.push(20);
    S.push(30);
    S.pop();

    return 0;
}