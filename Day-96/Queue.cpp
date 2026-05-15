#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int front, rear;
    int size;

public:

    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return rear == size-1;
    }

    void push(int x)
    {
        if(IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow";
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
        }
    }

    void Pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front = front+1;
            }
        }
    }

    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.start()<<endl;
    q.Pop();
    cout<<q.start()<<endl;

    return 0;
}