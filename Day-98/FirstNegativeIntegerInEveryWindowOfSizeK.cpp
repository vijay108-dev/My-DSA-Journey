// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// int display(queue<int> q)
// {
//     while(!q.empty())
//     {
//         if(q.front()<0)
//             return q.front();
//         q.pop();
//     }
//     return 0;
// }

// vector<int> firstNegative(int A[], int n, int k)
// {
//     queue<int>q;
//     for(int i=0;i<k-1;i++)
//         q.push(A[i]);

//     vector<int>ans;
//     for(int i=k-1;i<n;i++)
//     {
//         q.push(A[i]);
//         ans.push_back(display(q));
//         q.pop();
//     }
//     return ans;
// }

// int main()
// {
//     int A[] = {12,-51,-47,81,-25,10,13,28};
//     int n=8;
//     int k=3;
//     vector<int>ans=firstNegative(A,n,k);
//     for(int i=0;i<ans.size();i++)
//     {
//         cout<<ans[i]<<" ";
//     }

//     return 0;
// }


//--------------------------------------------- METHOD = 2 --------------------------------------------
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> firstNegative(int A[], int n, int k)
{
    queue<int>q;

    // first k-1 elements
    for(int i=0;i<k-1;i++)
    {
        if(A[i]<0)
            q.push(i);
    }
    vector<int>ans;

    // remaining elements
    for(int i=k-1;i<n;i++)
    {
        // push negative index
        if(A[i]<0)
            q.push(i);

        // remove out of window index
        while(!q.empty() && q.front()<=i-k)
            q.pop();

        // store answer
        if(q.empty())
            ans.push_back(0);
        else
            ans.push_back(A[q.front()]);
    }
    return ans;
}

int main()
{
    int A[]={12,-1,-7,8,-15,30,16,28};
    int n=8;
    int k=3;
    vector<int>ans=firstNegative(A,n,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}