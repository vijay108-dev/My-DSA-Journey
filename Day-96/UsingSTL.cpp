#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int>q;
    // Push
    q.push(5);
    q.push(8);
    q.push(30);

    // Size
    cout<<"Size : "<<q.size()<<endl;

    // Front
    cout<<"Front Element : "<<q.front()<<endl;

    // Empty
    cout<<"Empty or Not : "<<q.empty()<<endl;

    // Pop
    q.pop();
    cout<<"After Pop Front : "<<q.front()<<endl;

    return 0;
}