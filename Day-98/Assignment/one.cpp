#include <iostream>
#include <vector>
#include <queue>
using namespace std;
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=gas.size();

        // total gas check
        int totalGas = 0;
        int totalCost = 0;

        for (int i=0;i<n;i++)
        {
            totalGas+=gas[i];
            totalCost+=cost[i];
        }

        // possible hi nahi hai
        if(totalGas<totalCost)
            return -1;

        queue<int>q;
        int start=0;
        int balance=0;
        int i=0;

        while(start<n)
        {
            balance += gas[i]-cost[i];
            q.push(i);

            // agar balance negative ho gaya to current start invalid hai
            while(balance<0 && !q.empty())
            {
                int front = q.front();
                q.pop();
                balance-=(gas[front] - cost[front]);
                start = front+1;
            }

            // agar queue ka size n ho gaya to pura circle complete ho gaya
            if(q.size()==n)
                return start;

            i = (i+1)%n;
        }
        return -1;
    }

int main(){
    vector<int>gas={1,2,3,4,5};
    vector<int>cost={3,4,5,1,2};
    cout<<canCompleteCircuit(gas, cost)<<endl;

    return 0;
}