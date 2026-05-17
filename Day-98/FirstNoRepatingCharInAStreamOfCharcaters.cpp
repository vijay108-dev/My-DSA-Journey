#include <iostream>
#include <vector>
#include <queue>
using namespace std;
string FirstNonRepeating(string A)
{
    string B= "";
    vector<int>repeated(26,0);
    queue<char>q;

    for(int i=0;i<A.size();i++)
    {
        if (repeated[A[i]-'a'] >= 1)
        {
            repeated[A[i]-'a']++;
            while (!q.empty() && repeated[q.front()-'a']>1)
            {
                q.pop();
            }
            if (q.empty())
                B+='#';
            else
                B+=q.front();
        }
        else
        {
            repeated[A[i] - 'a']++;
            q.push(A[i]);
            while (!q.empty() && repeated[q.front()-'a']>1)
            {
                q.pop();
            }

            if(q.empty())
                B += '#';
            else
                B+=q.front();
        }
    }
    return B;
}

int main()
{
    string A;
    cout<<"Enter String: ";
    cin>>A;
    cout<<"Answer: " <<FirstNonRepeating(A)<<endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)