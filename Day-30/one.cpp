#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    int n=height.size();

    vector<int>leftmax(n);
    vector<int>rightmax(n);
    vector<int>water(n);

    // Left Max Array
    leftmax[0]= 0;
    for(int i=1; i < n; i++){
        leftmax[i] = max(leftmax[i - 1], height[i - 1]);
    }

    // Right Max Array
    rightmax[n - 1] =0;
    for(int i = n-2; i >= 0; i--) {
        rightmax[i] = max(rightmax[i + 1], height[i + 1]);
    }

    int totalWater= 0;

    // Water Array
    for(int i = 0; i<n;i++){
        int minHeight = min(leftmax[i], rightmax[i]);
        if(minHeight > height[i]){
            water[i] = minHeight - height[i];
            totalWater += water[i];
        } else {
            water[i]=0;
        }
    }

    //PRINT ARRAYS 

    cout << "Height Array: ";
    for(int i = 0; i < n; i++) {
        cout << height[i] << " ";
    }
    cout << endl;

    cout << "Max Left Array: ";
    for(int i = 0; i < n; i++) {
        cout << leftmax[i] << " ";
    }
    cout << endl;

    cout << "Max Right Array: ";
    for(int i = 0; i < n; i++) {
        cout << rightmax[i] << " ";
    }
    cout << endl;

    cout << "Water Array: ";
    for(int i = 0; i < n; i++) {
        cout << water[i] << " ";
    }
    cout << endl;

    cout << "Total Trapped Water = " << totalWater << endl;

    return 0;
}
//TC = O(N)
//SC = O(2N) = O(n)