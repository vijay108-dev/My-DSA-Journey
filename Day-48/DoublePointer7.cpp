#include<iostream>
using namespace std;

void seven(char *str1, char *str2){
    while((*str1=*str2))
    {
        str1++, str2++;
    }
}
int main(){

    char first[] = "Vijay";
    char second[] = "Money";
    seven(first,second);
    cout<<first<<endl;


    return 0;
}