#include<iostream>
using namespace std;
    class Node
    {
        public:
        int data;
        Node *next;

        //Now i will make a constructor
        Node(int value)
        {
            data = value;
            next = NULL;
        }
    };
int main()
{
    //Node A1(4);
    Node *Head;
    Head = new Node(4);

    cout<<Head->data<<endl; //4
    cout<<Head->next<<endl; //0 cross 0

    return 0;
}