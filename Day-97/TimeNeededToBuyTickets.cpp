#include <iostream>
#include <queue>
using namespace std;
int main() 
{
    int Ticket[] = {1,5,2,3,7};
    int n=5;
    int k=2;   // jis person ka time nikalna hai
    queue<int>q;

    // index push karo
    for(int i=0;i<n;i++) 
    {
        q.push(i);
    }
    int time=0;

    // jab tak kth person ke tickets khatam na ho
    while(Ticket[k] != 0) 
    {
        Ticket[q.front()]--;

        // agar abhi bhi tickets bache hain
        if(Ticket[q.front()]!=0) 
        {
            q.push(q.front());
        }
        q.pop();
        time++;
    }

    cout<<"Total Time = "<<time<<endl;

    return 0;
}
//TC AT WORST CASE O(n square)