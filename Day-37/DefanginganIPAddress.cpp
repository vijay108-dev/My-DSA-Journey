#include <iostream>
#include <string>
using namespace std;
int main(){
    string address = "1.1.1.1";
    string ans= "";
    int index= 0;

    while(index < address.length()){
        if(address[index]=='.'){
            ans += "[.]";
        }else{
            ans += address[index];
        }
        index++;
    }

    cout<<ans<<endl;

    return 0;
}
// Time Complexity: O(n) => because we traverse the string once.
// Space Complexity: O(n) =>because we create a new string to store the result.