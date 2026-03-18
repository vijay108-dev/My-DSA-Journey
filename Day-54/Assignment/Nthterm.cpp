// #include <iostream>
// using namespace std;
// int fib(int n)
// {
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;

//     return fib(n-1) + fib(n-2);
// }

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<fib(i)<<" ";
//     }

//     return 0;
// }



//just be honest i did not understand this code as much but i know we use long long for store big number but why we are using mode i did not get it 
// #include <iostream>
// #include <vector>
// using namespace std;
// const int MOD=1000000007;

// //Recursive function to get nth Fibonacci
// long long fib(int n)
// {
//     // Base cases
//     if(n==0)
//      return 0;
//     if(n==1) 
//     return 1;

//     //Recursion with mod
//     return (fib(n-1)+fib(n-2))%MOD;
// }

// // Function to return full series
// vector<long long> Series(int n)
// {
//     vector<long long> ans;

//     // 0 se n tak sab print
//     for(int i =0; i <= n;i++){
//         ans.push_back(fib(i));
//     }
//     return ans;
// }

//ye question dp se solve hoga bcz tc bahut jyda h 