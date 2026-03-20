#include <iostream>
using namespace std;
int count(string str, int index){
    //Base case
    if(index<0)
        return 0;
    char ch=str[index];
    //consonant check (alphabet + not vowel)
    if( ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ) && !(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') ){
        return 1+count(str,index-1);
    }else{
        return count(str, index - 1);
    }
}
int main(){
    string str="vijay";
    cout<<count(str,5);

    return 0;
}