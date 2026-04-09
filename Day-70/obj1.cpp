// #include<iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age, roll_number;
//     string grade;
// };

// int main(){
//     Student S1;
//     S1.name = "Vijay";
//     S1.age = 23;
//     S1.roll_number = 31;
//     S1.grade = "A++";

//     cout<<S1.name<<endl; //Vijay

//     Student S2;
//     S2.name = "Aashu Family";
//     S2.age = 23;
//     S2.roll_number = 31;
//     S2.grade = "A++";

//     cout<<S2.name<<endl; //Aashu Family

//     return 0;
// }



#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int age, roll_number;
    string grade;

    //Function getter and setter
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
            cout<<"Invalid name: ";
            return;
        }
        name =s;
    }
     void setage(int a)
    {
        if(age<0||age>100)
        {
            cout<<"invalid age: ";
            return;
        }
        name =a;
    }
     void setroll_number(int r)
    {
        name =r;
    }
     void setgrade(string s)
    {
        name =s;
    }
    void getname(){
        cout<<name<<endl;
    }

};

int main(){
    Student S1;
    S1.setname("Vijay");
    S1.setage(23);
    S1.setroll_number(31);
    S1.setgrade("A++");
    S1.getname();

    return 0;
}