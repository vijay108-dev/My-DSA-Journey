#include<iostream>
using namespace std;
int main()
{
for(int row=1;row<=5;row++){
    for(int col=1;col<=5-row;col++){
        cout<<" ";
    }
    for(char col='A';col<='A'+row-1;col++){
        cout<<col;
    }
    cout<<endl;
}


    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (char row=1;row<=n;row++){
        // space print
        for(char col=1;col<=n-row;col++){
            cout<<" ";
        }
        // star print
        for (char col='A';col<='A'+row-1;col++){
            cout<<col;
        }
        cout<<endl;
    }


    return 0;
}
