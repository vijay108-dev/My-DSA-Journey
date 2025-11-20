#include <iostream>
using namespace std;
// Add Digit 258
class Solution{
public:
    int addDigits(int num)
     {
        while(num>9){
            int ans=0,rem;
            while(num!=0){
                rem =num % 10;
                num/= 10;
                ans+=rem;
            }
            num=ans;
        }
        return num;   // FIX return added
    }
};
int main(){
    Solution s;
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Result: "<<s.addDigits(num)<<endl;
    return 0;
}
