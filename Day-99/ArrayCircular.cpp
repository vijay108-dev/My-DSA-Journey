#include <iostream>
#include<deque>
using namespace std;
class Dequeue
{
    int front, rear, size;
    int *arr;

public:
    Dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool IsEmpty()
    {
        return front == -1;
    }

    bool IsFull()
    {
        return ((rear+1)%size == front);
    }

    void push_front(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
            return;
        }

        else if (IsFull())
        {
            return;
        }

        else
        {
            front = (front - 1 + size) % size;
            arr[front] = x;
            return;
        }
    }

    void push_back(int x)
    {
        if (IsEmpty())
        {
            front = rear = 0;
            arr[0] = x;
        }

        else if (IsFull())
        {
            return;
        }

        else
        {
            rear = (rear + 1) % size;
            arr[rear] = x;
            return;
        }
    }

    void pop_back()
    {
        if (IsEmpty())
        {
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
                rear = (rear-1+size) % size;
            }
        }
    }

    void pop_front()
    {
        if (IsEmpty())
        {
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
                front = (front+1)%size;
            }
        }
    }

    int getFront()
    {
        if (IsEmpty())
            return -1;

        return arr[front];
    }

    int getRear()
    {
        if (IsEmpty())
            return -1;

        return arr[rear];
    }

};

int main()
{
    Dequeue dq(5);
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(2);
    dq.pop_front();
    dq.pop_back();
    cout<< "Front : " <<dq.getFront()<<endl;
    cout<< "Rear : " <<dq.getRear()<<endl;

    return 0;
}