//Method = 2
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    int n = height.size();

    int maxRight = 0;
    int maxIndex = 0;
    int water = 0;

    //Find max element index
    for(int i = 0; i < n; i++){
        if(height[i] > maxRight){
            maxRight = height[i];
            maxIndex = i;
        }
    }

    // Left Part
    int leftMax = 0;
    for(int i = 0; i < maxIndex; i++){
        if(leftMax > height[i]){
            water += leftMax - height[i];
        }else{
            leftMax = height[i];
        }
    }

    //Right Part
    int rightMax = 0;
    for(int i = n - 1; i > maxIndex; i--){
        if(rightMax > height[i]) {
            water += rightMax - height[i];
        } else {
            rightMax = height[i];
        }
    }

    cout<<"Total Trapped Water = " << water<<endl;
}