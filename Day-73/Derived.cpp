#include<iostream>
using namespace std;
    class Human
    {
        public:
        string name;
        int age, weight;
    };
    class Student: protected Human
    {
        private:
        int roll_number, fees;

        public:

        fun(string n, int a, int w)
        {
            name = n;
            age = a;
            weight = w;

        }


    };
int main(){
    Student A;
    //A.name = "vijay"; //not allowed bcz class is private by default
   //A.name = "vijay"; //not allowed protected
    //A.name = "vijay"; //aloowed bcz it is public

    A.fun("Vijay",10,30);






    return 0;
}

//you will play with him making public and private and protected