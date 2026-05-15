#include <iostream>
using namespace std;
//Implementing queue using circular array
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
        return (rear+1)%size == front;
    }

    void Push(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }

        else if (IsFull())
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }

        else
        {
            rear = (rear+1)%size;
            arr[rear] = x;
        }
    }

    void Pop()
    {
        if (IsEmpty())
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }

        else if (front == rear)
        {
            front = rear = -1;
        }

        else
        {
            front = (front+1)%size;
        }
    }

    int Start()
    {
        if (IsEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return -1;
        }

        else
        {
            return arr[front];
        }
    }

    void Display()
    {
        if (IsEmpty())
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }

        int i = front;
        while (i!=rear)
        {
            cout<<arr[i]<<" ";
            i = (i+1)%size;
        }
        cout<<arr[rear]<<endl;
    }
};

int main()
{
    Queue q(5);
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);

    q.Display();

    q.Pop();
    q.Pop();

    q.Display();
    q.Push(50);
    q.Push(60);

    q.Display();
    cout<<"Front Element : "<<q.Start()<<endl;

    return 0;
}