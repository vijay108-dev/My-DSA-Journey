// #include <iostream>
// using namespace std;
// int main() {

//     //Method = 1 TC= O(N^2) SC = O(1)
//     int arr[] = {4, 3, 2, 1, 2, 7, 6};
//     int n=7;
//     int repeating = -1;
//     int missing = -1;
    
//     //Find repeating
//     for(int i=0;i<n;i++){
//         for(int j =i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 repeating= arr[i];
//                 break;
//             }
//         }
//         if(repeating!= -1)
//          break;
//     }
//     // Find missing
//     for(int i =1; i<=n;i++){
//         bool found =false;
//         for(int j=0; j<n; j++){
//             if(arr[j]==i){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found){
//             missing=i;
//             break;
//         }
//     }
//     cout<<"Repeating: "<<repeating<<endl;
//     cout<<"Missing: "<<missing<< endl;
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

//Method = 2
// int main(){
//     vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
//     int n=arr.size();
    
//     sort(arr.begin(),arr.end());//O(n log n)

//     int repeating=-1, missing=-1;

//     for(int i=0;i<n;i++)
//     {
//         // Repeating check
//         if(i>0 && arr[i]==arr[i-1])
//             repeating=arr[i];
//         // Missing check
//         if(i>0 && arr[i]!=arr[i-1]+1)
//             missing=arr[i-1] + 1;
//     }

//     // Edge case -> if 1 is missing at start or n is missing at end
//     if(arr[0]!= 1)
//      missing =1;
//     if(arr[n-1]!= n)
//      missing= n;

//     cout<<"Repeating: "<<repeating<<endl;
//     cout<<"Missing: "<<missing<<endl;

//     return 0;
// }




// #include <iostream>
// #include <vector>
// using namespace std;

// //Method = 3
// int main() {
//     vector<int> arr = {4, 3, 2, 1, 2, 7, 6};
//     int n=arr.size();
//     vector<int> count(n+1,0);//count array, 1 to n
//     for(int i=0;i<n;i++){
//         count[arr[i]]++;
//     }
//     int repeating=-1;
//     int missing=-1;

//     for(int i=1;i<=n;i++)
//     {
//         if(count[i]==0)
//          missing = i;
//         else if(count[i]>1)
//          repeating = i;
//     }
//     cout<<"Repeating: "<<repeating<<endl;
//     cout<<"Missing: "<<missing<<endl;

//     return 0;
// }
// //TC = O(N)
// //SC = O(N)



#include <iostream>
#include <vector>
using namespace std;
vector<int> findMissingAndRepeating(vector<int>& arr){
    int n=arr.size();

    //Decrease each value by 1(0-based indexing)
    for(int i=0;i<n;i++)
        arr[i]--;

    //Count occurrences by adding n at index
    for(int i=0;i<n;i++)
        arr[arr[i]%n]+=n;

    vector<int>ans(2); //ans[0] = repeating, ans[1] = missing

    for(int i=0;i<n;i++){
        if(arr[i]/n == 2) // repeting element
            ans[0]=i + 1;
        else if(arr[i]/n == 0) //issing element
            ans[1]=i + 1;
    }

    return ans;
}
int main(){
    vector<int>arr = {4, 3, 2, 1, 2, 7, 6};
    vector<int>ans = findMissingAndRepeating(arr);

    cout<<"Repeating: "<<ans[0]<<endl;
    cout<<"Missing: "<<ans[1]<<endl;

    return 0;
}
//tc = o(n)
//sc = o(1)