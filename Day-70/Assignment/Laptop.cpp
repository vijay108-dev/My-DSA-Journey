#include<iostream>
using namespace std;
class Laptop 
{
    string brand;
    int ram;
    int storage;
    double battery;
    bool isOn;

public:
    Laptop(string b, int r, int s, double bat) 
    {
        brand = b;
        ram = r;
        storage = s;
        battery = bat;
        isOn = false;
    }

    void powerOn() 
    {
        isOn=true;
        cout<<"Laptop ON\n";
    }

    void powerOff() 
    {
        isOn=false;
        cout<<"Laptop OFF\n";
    }

    void use(double time) 
    {
        battery -=time*2;  // simple drain logic
        if(battery<0) 
        battery=0;
    }

    void charge(double amount) 
    {
        battery += amount;
        if(battery>100)
        battery = 100;
    }

    void display() 
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"RAM: " << ram << "GB\n";
        cout<<"Storage: " <<storage << "GB\n";
        cout<<"Battery: " << battery<< "%\n";
    }
};

int main() 
{
    Laptop l("Dell", 16, 512, 80);
    l.powerOn();
    l.use(5);
    l.charge(10);
    l.display();
    l.powerOff();
}