#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(vector<int>& nums){
    int start=0,end=nums.size()-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(nums[mid]>nums[mid+1])
            end =mid;
        else
            start = mid+1;
    }
    return start;
}

int main(){
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};
    cout<<"Peak Index: "<<findPeakElement(nums)<<endl;
    return 0;
}
