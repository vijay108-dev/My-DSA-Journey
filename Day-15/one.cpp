#include<iostream>
using namespace std;
// Convert 'a' to 'A'

char convert(char name)
{
    char ans = name-'a'+'A';
    return ans;
}


int main(){
    char name;
    cin>>name;

    cout<<convert(name)<<endl;


    return 0;
}