#include<iostream>
#include<queue>
using namespace std;
void printAll(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void printPositive(int arr[], int n, int k)
{
    queue<int>q ;
    // first window
    for(int i=0;i<k;i++)
    {
        if(arr[i]>0)
        {
            q.push(arr[i]);
        }
    }

    printAll(q);

    // remaining windows
    for(int i=k;i<n;i++)
    {
        // remove outgoing element
        if(!q.empty() && q.front() == arr[i-k])
        {
            q.pop();
        }

        // add new element
        if(arr[i]>0)
        {
            q.push(arr[i]);
        }

        printAll(q);
    }
}

int main()
{
    int arr[] = {3,6,2,7,8,11};
    int n=6 ;
    int k=3;
    printPositive(arr,n,k);

    return 0;
}