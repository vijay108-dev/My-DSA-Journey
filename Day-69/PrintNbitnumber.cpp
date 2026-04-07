#include <iostream>
#include <vector>
using namespace std;
/*Generate all binary strings of length N
such that number of 0s is always <= number of 1s at any point

Example (N = 3):
Valid strings:
111, 110, 101
*/
void find(int N, vector<string> &ans, string temp, int zero, int one){
    // Base case: if string length becomes N so store it
    if(temp.size()==N){
        ans.push_back(temp);
        return;
    }

    // We can add '0' only if zeros<ones
    // (to maintain condition: zero never exceeds one)
    if (zero<one){
        temp.push_back('0');   //add '0'
        find(N, ans, temp, zero+1, one);  // recursive call
        temp.pop_back();     // backtrack
    }
    // We can always add '1'
    temp.push_back('1');       // add '1'
    find(N, ans, temp, zero, one + 1);  // recursive call
    temp.pop_back();      //backtrack
}
int main(){
    int N=3;
    vector<string>ans;
    find(N, ans, "", 0, 0);
    // print result
    for(string s:ans)
    {
        cout<<s<<endl;
    }

    return 0;
}