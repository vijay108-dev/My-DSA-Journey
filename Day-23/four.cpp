#include <iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for (int i=0; i<n;i++) 
    {
        cin >>arr[i];
    }
    int target;
    cin>>target;
    int first = -1, last = -1;
    //First occurrence
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    //Last occurrence
    start = 0; end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    //  Only frequency print
    if (first==-1)
        cout<<0<<endl;
    else
        cout<<(last-first+1);

    return 0;
}
