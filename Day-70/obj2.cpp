#include<iostream>
using namespace std;

    // class a
    // {

    // };

    //This is my empty class whose size is 1 when we print the size of this class

    class a
    {

        char c;
        int b;
        
    };

    //now my output is 8 here is my padding we will use here


int main(){
    a obj;
    cout<<sizeof(obj)<<" ";

    return 0;
}