#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
long long MakeNumber(Node* head)
{
    long long num = 0;
    long long mod = 1000000007;
    while(head)
    {
        num = (num*10+head->data) % mod;
        head = head->next;
    }
    return num;
}
long long MultiplyLL(Node* first , Node* second)
{
    long long mod = 1000000007;
    long long x = MakeNumber(first);
    long long y = MakeNumber(second);
    return (x*y) % mod;
}
int main()
{
    Node* first = new Node(3);
    first->next = new Node(2);
    Node* second = new Node(2);
    cout<<MultiplyLL(first,second)<<endl;

    return 0;
}
//TC=O(n+m)
//SC=O(1)