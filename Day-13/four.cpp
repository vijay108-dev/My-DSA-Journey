// #include<iostream>
// using namespace std;

// void swap(int a, int b)
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
// }

// int main(){

//     int a, b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";

//     return 0;
// }

//it does not change bcz of pass by value




#include<iostream>
using namespace std;

void swap(int &a, int &b) //pass by refernce
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){

    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

    return 0;
}