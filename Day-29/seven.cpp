#include<iostream>
using namespace std;
int maxDiff(vector<int> &arr){
    int n =arr.size();

	int ans = INT_MIN;
	for(int i=0;i<n;i++){
	    for(int j=i+1;j<n;j++){ 
	       
	        if(arr[j] >arr[i]){
	            ans= max(ans, arr[j]-arr[i]);
	        }
	    }
	}
	return ans;
}

int main(){
	vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
	cout << maxDiff(arr) <<endl;
	return 0;
}
//TC = O(n2)

//  int n = arr.size();
//     int suffixMax = arr[n-1]; //last element
//     int ans = INT_MIN;
//     for(int i=n-2;i>=0;i--){
//         ans= max(ans, suffixMax - arr[i]); // best difference
//         suffixMax = max(suffixMax, arr[i]); // update suffix max
//     }
//     return ans;
// }

//TC = O(n)
//SC = O(1)