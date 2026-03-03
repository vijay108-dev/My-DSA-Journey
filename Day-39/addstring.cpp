#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
    string addStrings(string num1, string num2)
     {
        int index1 =num1.size() - 1;
        int index2 =num2.size() - 1;

        string ans="";
        int carry=0;

        while(index1>=0 || index2>=0 || carry){

            int sum=carry;

            if(index1>=0){
                sum+= (num1[index1] - '0');
                index1--;
            }

            if(index2 >= 0){
                sum+=(num2[index2] - '0');
                index2--;
            }

            carry=sum / 10;
            ans+=(sum % 10) + '0';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

int main(){
    string num1 = "9654";
    string num2 = "681";
    cout<<addStrings(num1, num2)<<endl;

    return 0;
}