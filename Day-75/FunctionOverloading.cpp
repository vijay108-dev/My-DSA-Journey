#include <iostream>
using namespace std;
class Area 
{
public:
    //Rectangle
    double calculateArea(double l,double b) 
    {
        return l*b;
    }

    // Circle
    double calculateArea(double r) 
    {
        return 3.14159*r*r;
    }

    // Square
    double calculateArea(int s) 
    {
        return s*s;
    }
};

int main(){
    Area obj;

    cout<<"Rectangle Area: "<<obj.calculateArea(5,3)<<endl;
    cout<<"Circle Area: "<<obj.calculateArea(4)<<endl;
    cout<<"Square Area: "<<obj.calculateArea(6)<<endl;

    return 0;
}