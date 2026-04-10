#include<iostream>
using namespace std;
class Car 
{
    string brand;
    string model;
    int year;
    double speed;

public:
    Car(string b, string m, int y) 
    {
        brand = b;
        model = m;
        year = y;
        speed = 0;
    }

    void accelerate(double s) 
    {
        speed+=s;
    }

    void brake(double s) 
    {
        speed-=s;
        if(speed<0)
        speed = 0;
    }

    void display() 
    {
        cout << brand << " " << model << " (" << year << ")\n";
        cout << "Speed: "<<speed<<endl;
    }
};

int main()
{
    Car c("Toyota", "Fortuner", 2022);
    c.accelerate(60);
    c.brake(20);
    c.display();
}