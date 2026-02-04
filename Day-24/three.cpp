#include <iostream>
using namespace std;
int search(int arr[], int n, int target){
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        // Left part is sorted
        if (arr[start] <= arr[mid]) {
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        // Right part is sorted
        else {
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main() {
    int arr[] = {4, 5, 0, 1, 2, 3};
    int n = 6;
    int target = 3;

    cout << "Index: " << search(arr, n, target) << endl;
    return 0;
}
