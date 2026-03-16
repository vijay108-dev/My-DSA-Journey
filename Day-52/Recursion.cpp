// #include <iostream>
// using namespace std;
// void print(int num, int N)
// {
//     if(num >N)// base case
//         return;
//     cout<<num<<" ";
//     print(num+1, N);//recursive call
// }
// int main(){
//     print(1, 5);
// }


// #include <iostream>
// using namespace std;

// void printNatural(int n)
// {
//     if(n==0)//base case
//         return;
//     printNatural(n-1);//pehle chhote problem solve
//     cout<<n<<" ";     // fir current number print
// }
// int main()
// {
//     int n;
//     cout<<"Enter the N: ";
//     cin>>n;
//     printNatural(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;
// void printEven(int num,int N)
// {
//     if(num>N) //base case
//         return;
//     cout<<num<<" ";
//     printEven(num+2,N);//2se increase
// }
// int main(){
//     int N=10;
//     printEven(2,N); //even numbers 2 se start
// }



// #include <iostream>
// using namespace std;
// void printEven(int num,int N)
// {
//     if(num>N)  //base case
//         return;
//     if(num%2 == 0)   //even check
//         cout<<num<<" ";
//     printEven(num+1,N);  //next number
// }
// int main(){
//     printEven(1,10);
// }