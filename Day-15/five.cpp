#include <iostream>
using namespace std;
//Nim Game
bool canWinNim(int n)
{
    if(n%4!=0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    if(canWinNim(n))
        cout<<"First player wins"<<endl;
    else
        cout<<"First player loses"<<endl;
        

    return 0;
}
