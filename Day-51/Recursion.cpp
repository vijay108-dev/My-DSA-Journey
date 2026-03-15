// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     //Iterative Approch
//     for(int i=n;i>0;i--){
//         cout<<i<<" days left for birthday \n";
//     }

//     cout<<"Happy Birthday\n";

//     return 0;
// }


// #include<iostream>
// using namespace std;
// void fun1(){
//     cout<<"3 days left for birthday\n";
// }

// void fun2(){
//     cout<<"2 days left for birthday\n";
// }

// void fun3(){
//     cout<<"1 day left for birthday\n";
//     cout<<"Happy Birthday\n";
// }
// int main(){
//     fun1();
//     fun2();
//     fun3();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void birthday(int n){
//     //Base condition
//     if(n == 0){
//         cout<<"Happy Birthday\n";
//         return;
//     }
//     cout<<n<<" days left for birthday\n";
//     // Recursive call
//     birthday(n-1);
// }
// int main(){
//     int n=5;
//     birthday(n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void printNum(int n){
//     // Base condition
//     if(n == 0){
//         return;
//     }
//     cout<<n<<" ";
//     // Recursive call
//     printNum(n-1);
// }
// int main(){
//     int n=5;
//     printNum(n);
//     return 0;
// }


#include<iostream>
using namespace std;
void printEven(int n){
    if(n<2) //base condition
    return;   
    if(n%2==0){
        cout<<n<<" ";
    }
    printEven(n-1); //recursive call
}
int main(){
    printEven(10);
    return 0;
}