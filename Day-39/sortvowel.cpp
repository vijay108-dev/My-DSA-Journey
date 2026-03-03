#include <iostream>
#include <vector>
#include <string>
using namespace std;
string sortVowels(string s){

    vector<int> lower(26, 0);
    vector<int> upper(26, 0);

    //Count vowels and mark them with '#'
    for (int i=0;i<s.size();i++) 
    {

        // lowercase vowels
        if (s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
        {

            lower[s[i]-'a']++;
            s[i]= '#';
        }

        //uppercase vowels
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||  s[i] == 'O' || s[i] == 'U') 
        {

            upper[s[i] - 'A']++;
            s[i]='#';
        }
    }

    //Create sorted vowel string
    string ans = "";

    //Uppercase vowels first (ASCII order)
    for (int i=0;i<26;i++) 
    {
        while(upper[i] > 0) 
        {
            ans += char(i + 'A');
            upper[i]--;
        }
    }

    //Lowercase vowels next
    for(int i=0;i<26;i++) 
    {
        while(lower[i]>0){
            ans+=char(i + 'a');
            lower[i]--;
        }
    }

    //Replace '#' with sorted vowels
    int second =0;

    for(int i= 0;i<s.size();i++) 
    {
        if (s[i]=='#'){
            s[i]=ans[second];
            second++;
        }
    }

    return s;
}

int main(){
    string s="lEetcOde";
    cout<<sortVowels(s)<<endl;

    return 0;
}