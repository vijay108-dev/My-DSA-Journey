#include <iostream>
using namespace std;
class Complex 
{
    int real,img;
public:

     Complex()
     {

     };
    // Constructor
    Complex(int real, int img) 
    {
        this->real = real;
        this->img = img;
    }

    // Operator Overloading (+)
    // Complex operator + (Complex c) {
    //     Complex temp;
    //     temp.real = this->real + c.real;
    //     temp.img  = this->img + c.img;
    //     return temp;
    // }

    // Display function
    void display() {
        cout<<real<<" +i"<<img<<endl;
    }

    Complex operator +(Complex &C)
    {
        Complex ans;
        ans.real=real+C.real;
        ans.img=real+C.img;
        return ans;
    }
};

//within the class ame type k object ka aap private memeber ko access kr skte h

int main() {
    Complex c1(3,4);
    Complex c2(4,6);

    Complex c3 = c1+c2;
    c3.display();


    return 0;
}