#include <iostream>
#include <vector>
using namespace std;
//Two pointer Method = 3
int main() {

    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = height.size();

    int left = 0;
    int right = n - 1;
    int leftMax = 0;
    int rightMax = 0;
    int water = 0;

    while(left <= right) {

        if(height[left] <= height[right]) {
            if(height[left] >= leftMax) {
                leftMax = height[left];
            } 
            else {
                water += leftMax - height[left];
            }
            left++;
        }
        else {
            if(height[right] >= rightMax) {
                rightMax = height[right];
            } 
            else {
                water += rightMax - height[right];
            }
            right--;
        }
    }

    cout << "Total Trapped Water = " << water << endl;
}