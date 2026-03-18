// #include <iostream>
// using namespace std;
// // Fibonacci function (recursive)
// int fib(int n)
// {
//     //Base Case
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;

//     //Recursive Case
//     return fib(n-1)+fib(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Fibonacci number is: "<<fib(n)<<endl;

//     return 0;
// }


#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fib(n-1)+fib(n-2); //recursion
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin>>n;
    // loop se har term print krava dega
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}