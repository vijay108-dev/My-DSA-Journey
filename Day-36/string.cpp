#include <iostream>
#include <string>
using namespace std;
int main(){
    // string s = "Aashu Singh";
    // int n = s.length();
    // for(int i = n-1; i>=0;i--){
    //     cout<<s[i]<<endl;
    // }

    // char arr[] ={'a','a','s','h','u'};
    // for(char i =0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }


    // char arr[20];
    // cin>>arr;
    // cout<<arr;


    // char arr[20];
    // cin>>arr;
    // arr[2]='\0';
    // cout<<arr; //vi



    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    //cout<<s.size()<<endl;



    // string first = "Vijay";
    // string last = " Singh";

    // first.append(last);
    // cout<<first<<endl;



    //Escape Character
    // string s = "\"Aashu is a good girl with pure heart\"";
    // cout << s; //"Aashu is a good girl with pure heart"%    



    // string s = "vijay";
    // int start =0;
    // int end=s.length() - 1;
    // while(start <end){
    //     swap(s[start], s[end]);
    //     start++;
    //     end--;
    // }

    // cout<<s<<endl;

    //size of string
    // char s[]= "vijay";
    // int size =0;
    // // size calculate using null character
    // while(s[size] != '\0'){
    //     size++;
    // }
    // cout<<"size = " <<size<<endl;


    //Palindrome or not
     char s[] = "madam";
   // Length find karuga using '\0'
    int length=0;
    while(s[length] != '\0'){
        length++;
    }

    int start =0;
    int end =length - 1;
    bool isPalindrome=true;

    //Compare from start and end
    while(start < end){
        if(s[start] !=s[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    //result
    if(isPalindrome)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
        
    return 0;
}