#include<iostream>
using namespace std;
    class Human
    {
        protected:
        string name;
        int age;

        public:
        Human(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void display()
        {
            cout<<name<<" "<<age<<" \n";
        }
        void work()
        {
            cout<<" I am working\n";
        }
    };

    class Student:public Human
    {
        int roll_number,fees;
        public:
        Student(string name, int age, int roll_numnber, int fees):Human (name,age)
        {
            this->roll_number = roll_number;
            this->fees = fees;
        }
        void display()
        {
            cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
        }
    };

    class Teacher:public Human
    {
        int salary;

        public:
        Teacher(int salary,string name, int age)
         {
            this->salary = salary;
            this->name = name;
            this->age = age;
        }
         void display()
        {
            cout<<name<<" "<<age<<" "<<salary<<" ";
        } 

    };

int main()
{
    Student A1("Vijay",12,10,439493);
    A1.display();
    


    return 0;
}