#include <iostream>
#include <vector>
using namespace std;
int shipWithinDays(vector<int> &weights, int days){
    int N=weights.size();
    int D=days;
    int start =0, end =0, ans =-1;

    //search space
    for(int i=0;i<N;i++){
        start= max(start, weights[i]); // max single package weight
        end+=weights[i];//total weight
    }

    // binary search
    while(start<=end){
        int mid =start+(end-start)/2;

        int load=0;
        int dayCount=1;

        for(int i=0;i<N;i++){
            load+=weights[i];
            if(load >mid){
                dayCount++;
                load= weights[i];
            }
        }

        if (dayCount<=D){
            ans =mid;
            end= mid - 1;
        }else{
            start= mid+ 1;
        }
    }
    return ans;
}

int main() 
{
    int n,d;

    cout<<"Enter number of packages: ";
    cin>>n;

    cout<<"Enter number of days: ";
    cin>>d;

    vector<int> weights(n);
    cout << "Enter weight of each package:\n";
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    cout<<"Minimum ship capacity required: "<<shipWithinDays(weights, d)<<endl;

    return 0;
}
