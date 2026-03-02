#include <iostream>
#include <vector>
#include <string>
using namespace std;
    string sortSentence(string s){
        vector<string> ans(10); //max 9 words problem me hote hain
        string temp="";
        
        for(int i=0;i<s.size();i++)
         {
            
            if(s[i]==' ') 
            {
                
                int pos = temp[temp.size()-1] - '0'; // last digit
                temp.pop_back(); //number remove krna h
                ans[pos]=temp;//correct index par store number krna h
                temp="";
            }
            else{
                temp+= s[i];
            }
        }
        
        // ast word handle karna zaroori hai
        int pos = temp[temp.size()-1] - '0';
        temp.pop_back();
        ans[pos]=temp;
        
        string result = "";
        for(int i=1;i<ans.size();i++)
         {
            if(ans[i] != "") {
                result += ans[i];
                result += " ";
            }
        }
        
        result.pop_back();//last extra space remove
        return result;
    }

int main(){
    
    string s;
    getline(cin, s); //full sentence input
    cout <<sortSentence(s)<< endl;
    
    return 0;
}
//TC = 0(N)
//SC = O(N)