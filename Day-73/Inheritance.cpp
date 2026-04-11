#include<iostream>
using namespace std;

class Human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun()
    {
        a=10;
        b=20;
        c=30;

    }
};
int main()
{
    Human Vijay;
    //Vijay.a = 20; //error
    //Vijay.b=30; //error
    //int d = Vijay.c=21; //No error
    //cout<<d<<endl; //21
    
    //same class k andher me kisi ko bhi access kr skta hu fun bna kr
    Vijay.fun();

   


    return 0;
}