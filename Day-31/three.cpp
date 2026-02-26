#include <iostream>
using namespace std;
int main(){
    int A[2][2]={
        {1, 2},
        {3, 4}
    };

    int B[2][2]={
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    // addition
    for(int i=0; i<2;i++){
        for(int j=0; j < 2;j++){
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    // print result
    cout<<"Sum of matrices:\n";
    for(int i=0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<< result[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}

//TC = O(row*col)
//SC = O(row*col)