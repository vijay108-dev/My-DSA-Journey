#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node* front;
    Node* rear;

public:

    Queue()
    {
        front = rear = NULL;
    }

    bool IsEmpty()
    {
        return front == NULL;
    }

    void Push(int x)
    {
        Node* temp = new Node(x);

        if (IsEmpty())
        {
            front = rear = temp;
        }

        else
        {
            rear->next = temp;
            rear = temp;
        }
    }

    void Pop()
    {
        if (IsEmpty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }

        Node* temp = front;
        front = front->next;

        if(front == NULL)
        {
            rear = NULL;
        }

        delete temp;
    }

    int Start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }

        return front->data;
    }
};

int main()
{
    Queue q;
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Pop();
    cout<<"Front Element : "<<q.Start()<<endl;

    return 0;
}