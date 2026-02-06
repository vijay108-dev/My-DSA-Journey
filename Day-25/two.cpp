#include <iostream>
#include <vector>
using namespace std;
int painterPartition(vector<int> &boards, int k){
    int N =boards.size();
    int M =k;
    // agar painters boards se zyada hain
    if(M>N)
    return -1;

    int start =0,end =0,ans= -1;
    // search space
    for (int i=0;i<N;i++){
        start=max(start, boards[i]); // max single board length
        end += boards[i]; // total length
    }
    // binary search
    while(start<=end){
        int mid = start+(end-start)/2;
        int time=0;
        int count=1;
        for (int i=0;i<N; i++){
            time+= boards[i];
            if (time>mid){
                count++;
                time = boards[i];
            }
        }

        if(count<= M){
            ans =mid;
            end= mid - 1;
        }else{
            start =mid +1;
        }
    }
    return ans;
}

int main() 
{
    int n,k;

    cout<<"Enter number of boards: ";
    cin>>n;

    cout<<"Enter number of painters: ";
    cin>>k;

    vector<int> boards(n);
    cout<<"Enter length of each board:\n";
    for(int i=0;i<n;i++){
        cin>>boards[i];
    }
    cout<<"Minimum time to paint all boards: "<<painterPartition(boards, k)<<endl;

    return 0;
}
