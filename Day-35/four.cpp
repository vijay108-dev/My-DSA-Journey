#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int>& nums){
    int n = nums.size();
    //Place each number at its correct index
    for(int i=0;i<n;i++){

        while(nums[i]>=1 && nums[i]<=n && nums[i] != nums[nums[i]-1])
        {

            int correctIndex=nums[i]-1;
            swap(nums[i],nums[correctIndex]);
        }
    }

    //Find first index where value is incorrect
    for(int i=0;i<n;i++){
        if(nums[i]!= i + 1){
            return i+1;
        }
    }
    //If all numbers are placed correctly
    return n+1;
}
int main()
 {

    vector<int> nums = {3, 4, -1, 1, 2, 6 ,3};
    int result = firstMissingPositive(nums);

    cout<<"First Missing Positive: "<<result<<endl;

    return 0;
}