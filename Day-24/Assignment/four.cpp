#include <iostream>
#include <vector>
using namespace std;
bool search(vector<int>& nums, int target){
    int start=0;
    int end=nums.size() - 1;
    while(start<=end){
        int mid =start+(end-start)/2;
        //Target get it
        if(nums[mid] ==target)
            return true;
        // Duplicate case decide nahi ho paa raha
        if (nums[start]==nums[mid] &&nums[mid]==nums[end]){
            start++;
            end--;
        }
        // Left part sorted
        else if(nums[start]<=nums[mid]){
            if(target>=nums[start] && target<nums[mid]){
                end=mid-1;
            }else{
                start =mid+1;
            }
        }
        // Right part sorted
        else{
            if (target>nums[mid] && target<=nums[end]){
                start=mid + 1;
            }else{
                end=mid - 1;
            }
        }
    }
    return false;
}
int main(){
    vector<int>nums= {2, 5, 6, 0, 0, 1, 2};
    int target =0;
    if (search(nums,target)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}
