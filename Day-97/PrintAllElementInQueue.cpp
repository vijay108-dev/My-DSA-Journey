#include <iostream>
#include <queue>
using namespace std;
int main() 
{
    queue<int>q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(3);
    q.push(5);
    // Print all elements

    int n= q.size();
    while(n--) 
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<q.size()<<endl;

    return 0;
}