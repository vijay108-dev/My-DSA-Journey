#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int>& nums)
 {
    int candidate=0;
    int count=0;
    int n=nums.size();

    for (int i=0;i<n;i++)
     {

        if(count == 0) 
        {
            candidate =nums[i];
            count =1;
        }
        else if(nums[i] == candidate)
         {
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main()
{
    vector<int> nums = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    int result = majorityElement(nums);
    cout<<"Majority Element: "<<result<<endl;

    return 0;
}