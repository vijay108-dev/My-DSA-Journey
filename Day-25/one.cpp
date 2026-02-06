#include<iostream>
#include<vector>
using namespace std;
    int findPages(vector<int> &arr,int k){
        int N=arr.size();
        int M=k;
        // agar students books se zyada hain
        if (M > N)
            return -1;
        int start=0,end=0,ans=-1;


        // search space
        for(int i =0;i<N;i++){
            start=max(start, arr[i]); // max single book pages
            end+= arr[i]; // total pages
        }

        //binary search
        while (start<=end){
            int mid=start + (end-start)/2;

            int pages= 0;
            int count= 1;
            for(int i =0;i<N;i++){
                pages +=arr[i];
                if (pages>mid) 
                {
                    count++;
                    pages =arr[i];
                }
            }

            if(count<=M){
                ans =mid;
                end= mid - 1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }

int main(){
    int n,k;

cout<< "Enter number of books: ";
cin>>n;

cout<< "Enter number of students: ";
cin>>k;
vector<int> arr(n);
cout << "Enter pages in each book:\n";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<< "Minimum maximum pages allocated: "<< findPages(arr, k)<<endl;


    return 0;
}
