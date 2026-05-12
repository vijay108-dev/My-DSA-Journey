// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> nextGreaterElements(vector<int> arr) 
// {
//     int n =arr.size();
//     vector<int>ans(n,-1);
//     for(int i=0;i<n;i++) 
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]>arr[i]) 
//             {
//                 ans[i] = arr[j];
//                 break;
//             }
//         }
//     }

//     return ans;
// }

// int main() 
// {
//     vector<int>arr={8,6,4,7,4,9,10,8,12};
//     vector<int>result = nextGreaterElements(arr);
//     for(int i=0;i<result.size();i++) 
//     {
//         cout<<result[i]<<" ";
//     }

//     return 0;
// }


//--------------------------------------- METHOD = 2 ----------------------------------------------
// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// vector<int> nextGreaterElements(vector<int> arr) 
// {

//     int n = arr.size();
//     vector<int>arr(n, -1);
//     stack<int>st;

//     // traverse circular array twice
//     for(int i=2*n-1;i>=0;i--) 
//     {
//         int idx = i%n;
//         if (st.empty()) 
//         {
//             st.push(arr[idx]);
//         }
//         else 
//         {
//             // first while loop
//             while(!st.empty() && st.top()<=arr[idx]) 
//             {
//                 st.pop();
//             }

//             // answer fill only in first pass
//             if(i<n) 
//             {

//                 if(st.empty()) 
//                 {
//                     arr[idx]=-1;
//                 }
//                 else
//                 {
//                     arr[idx] = st.top();
//                 }
//             }

//             st.push(arr[idx]);
//         }
//     }
//     return arr;
// }

// int main() 
// {
//     vector<int>arr = {1, 3, 2, 4};
//     vector<int>result = nextGreaterElements(arr);
//     for(int i=0;i<result.size();i++) 
//     {
//         cout << result[i] << " ";
//     }

//     return 0;
// }

