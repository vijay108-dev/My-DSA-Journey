#include <iostream>
using namespace std;
//Leap Year GFG
class Solution
{

public:

    bool isLeap(int year)
    {
        if (year%400 ==0){
            return true;
        }
        else if(year%100==0){
            return false;
        }
        else if(year % 4==0){
            return true;
        }
        else{
            return false;
        }

    }
};
int main(){
    Solution s;
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(s.isLeap(year))
        cout<<year<<" is a Leap Year"<<endl;
    else
        cout<<year<<" is NOT a Leap Year"<<endl;



    return 0;
}
