#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;

    if (a>0&& b>0)
        cout<<"Both are positive" << endl;
    else
        cout<<"At least one is not positive" << endl;


         int x=-5,y =10;

    if(x>0||y>0)
        cout << "At least one number is positive" << endl;
    else
        cout<<"Both are negative" << endl;

            int num=-3;

    if(!(num>0))
        cout<<"Number is not positive"<<endl;
    else
        cout<<"Number is positive"<<endl;


    return 0;
}
