#include<iostream>
using namespace std;
    int solve(vector<int> &A, int B){
        sort(A.begin(),A.end());
        int start=0, end=1, n=A.size();
        while(end<n){
            if(A[end] - A[start]==B)
                return 1;

            else if(A[end] - A[start]<B)
                end++;

            else
                start++;

            // Avoid same index
            if(start==end) 
            end++;
        }

        return 0;
    }


