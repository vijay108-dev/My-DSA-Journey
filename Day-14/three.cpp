#include <iostream>
#include <climits>
using namespace std;
class Solution{
public:
    int reverseInt(int x) 
    {
        long long rev=0;

        while(x !=0){
            int digit=x%10;
            rev=rev* 10+digit;
            x/=10;
            // overflow check
            if(rev >INT_MAX||rev<INT_MIN)
                return 0;
        }
        return (int)rev;
    }
};

int main(){
    Solution s;
    int x;
    cout<<"Enter an integer: ";
    cin>> x;
    int result=s.reverseInt(x);
    cout<<"Reversed: " <<result<<endl;

    
    return 0;
}
