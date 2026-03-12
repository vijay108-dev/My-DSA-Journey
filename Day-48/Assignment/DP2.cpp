#include <iostream>
using namespace std;
void reverseString(char *str)
{
    char *end=str;
    // Move end pointer to last character
    while(*end!='\0'){
        end++;
    }
    end--; //last character par le aana

    //Swap start and end characters
    while(str<end)
    {
        char temp=*str;
        *str=*end;
        *end=temp;
        str++;
        end--;
    }
}
int main(){
    char myString[]="Programming";
    reverseString(myString);
    cout<<myString<<endl; //gnimmargorP
    return 0;
}