#include<iostream>
#include<deque>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Dequeue
{
    Node *front, *rear;

public:

    Dequeue()
    {
        front = rear = NULL;
    }

    // push back
    void push_back(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            return;
        }
        else
        {
            Node *temp = new Node(x);
            rear->next = temp;
            temp->prev = rear;
            rear = temp;
            return;
        }
    }

    // push front
    void push_front(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
            return;
        }
    }

    // pop back
    void pop_back()
    {
        if(front == NULL)
            return;

        else
        {
            Node *temp = rear;
            rear = rear->prev;
            delete temp;
            if(rear)
                rear->next = NULL;
            else
                front = NULL;
        }
    }

    // pop front
    void pop_front()
    {
        if(front == NULL)
            return;

        else
        {
            Node *temp = front;
            front = front->next;
            delete temp;
            if(front)
                front->prev = NULL;
            else
                rear = NULL;
        }
    }

    // front value
    int start()
    {
        if(front == NULL)
            return -1;
        else
            return front->data;
    }

    // rear value
    int end()
    {
        if(front == NULL)
            return -1;
        else
            return rear->data;
    }
};

int main()
{
    Dequeue dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout<< "Front: " <<dq.start()<<endl;
    cout<< "Rear: " <<dq.end()<<endl;

    dq.pop_front();

    cout<< "After pop_front()" <<endl;

    cout<< "Front: " <<dq.start()<<endl;
    cout<< "Rear: " <<dq.end()<<endl;

    dq.pop_back();

    cout<< "After pop_back()" <<endl;

    cout<< "Front: " <<dq.start()<<endl;
    cout<< "Rear: " <<dq.end()<<endl;

    return 0;
}