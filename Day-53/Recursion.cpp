// #include <iostream>
// using namespace std;
// int factorial(int n){
//     // Base case
//     if(n==0 || n==1)
//         return 1;

//     //Recursive case
//     return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<< "Factorial of a number is = " <<factorial(n)<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int sum(int n){
//     //Base case
//     if(n==0)
//     return 0;

//     //Recursive case
//     return n + sum(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Sum = "<<sum(n)<<endl;

//     return 0;
// }




// #include <iostream>
// using namespace std;
// int power(int n){
//     //Base case
//     if(n==0)
//     return 1;

//     //Recursive case
//     return 2*power(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter power: ";
//     cin>>n;
//     cout<<"Result is = "<<power(n)<<endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int power(int num, int n) {
//     // Base case
//     if(n==1)
//     return num;
//     //Recursive case
//     return num*power(num, n-1);
// }
// int main(){
//     int num,n;
//     cout<<"Enter a number: ";
//     cin>>num;
//     cout<<"Enter a power: ";
//     cin>>n;
//     cout<<"Result = " <<power(num,n)<<endl;

//     return 0;
// }



#include <iostream>
using namespace std;
int sumSquare(int n)
{
    //Base case
    if(n==0)
    return 0;

    //Recursive case
    return n*n+sumSquare(n - 1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of squares is = "<<sumSquare(n)<<endl;

    return 0;
}