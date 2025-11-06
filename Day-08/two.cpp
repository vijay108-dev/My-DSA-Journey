#include<iostream>
using namespace std;
int main()
{
for(int row=1;row<=5;row++){
    for(int col=1;col<=5-row;col++){
        cout<<" ";
    }
    for(int col=1;col<=row;col++){
        cout<<row;
    }
    cout<<endl;
}


    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for (int row=1;row<=n;row++){
        // space print
        for(int col=1;col<=n-row;col++){
            cout<<" ";
        }
        // star print
        for (int col=1;col<=row;col++){
            cout<<row;
        }
        cout<<endl;
    }


    return 0;
}

//     1
//    22
//   333
//  4444
// 55555