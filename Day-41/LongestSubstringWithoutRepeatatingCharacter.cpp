// #include <iostream>
// #include <string>
// using namespace std;

// // Function to check if substring has all unique characters
// bool isUnique(string s,int start,int end){
//     for(int i=start;i<=end;i++){
//         for(int j=i+1;j<=end;j++){
//             if(s[i]==s[j]){
//                 return false; //duplicate found
//             }
//         }
//     }
//     return true;//all characters unique
// }

// // Function to find longest substring without repeating characters
// int longestSubstring(string s){
//     int n = s.length();
//     int maxLength=0;

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
            
//             // check if substring s[i...j] is unique
//             if(isUnique(s, i, j)){
//                 int length=j-i+1;
//                 if(length> maxLength){
//                     maxLength=length;
//                 }
//             }
//         }
//     }
//     return maxLength;
// }

// int main(){
//     string s1="abcdecbeadf";
//     string s2="ababc";

//     cout<<"Longest length (abcdecbeadf): "<<longestSubstring(s1)<<endl;
//     cout<<"Longest length (ababc): "<<longestSubstring(s2)<<endl;

//     return 0;
// }

//TC=O(N^2)




//Method = 2
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int longestSubstring(string s){

//     int n=s.length();
//     int maxLength=0;

//     // First pointer (start)
//     for(int i=0;i<n;i++){

//         vector<int>freq(256,0);// character frequency

//         // Second pointer(end)
//         for(int j=i;j<n;j++){

//             // If character already seen break
//             if(freq[s[j]]==1){
//                 break;
//             }

//             // Mark character as seen
//             freq[s[j]]=1;

//             int length=j-i+1;
//             maxLength=max(maxLength, length);
//         }
//     }

//     return maxLength;
// }

// int main(){

//     string s1="abcdecbeadf";
//     string s2="ababc";
//     cout<<"Longest length (abcdecbeadf): "<<longestSubstring(s1)<<endl;

//     cout<<"Longest length (ababc): "<<longestSubstring(s2)<<endl;
//     return 0;
// }

//TC = O(N^2)


//Method =3
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int longestSubstring(string s){

    vector<bool>count(256,0);
    int first =0;
    int second= 0;
    int len =0;

    while(second<s.size()){

        // If duplicate found shrink window
        while(count[s[second]]){
            count[s[first]]=0;
            first++;
        }
        //Add current character
        count[s[second]]=1;

        //Update length
        len=max(len, second-first+1);
        second++;
    }
    return len;
}

int main(){

    string s1 = "abcdecbeadf";
    string s2 = "ababc";

    cout<<"Longest length (abcdecbeadf): "<<longestSubstring(s1)<<endl;
    cout<<"Longest length (ababc): "<<longestSubstring(s2)<<endl;

    return 0;
}