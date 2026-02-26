#include <iostream>
using namespace std;
int main(){
    int matrix[3][3]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n =3;
    int sum= 0;

    for(int i=0;i<n;i++){
        sum+= matrix[i][i];//Primary diagonal
        sum+=matrix[i][n - 1 - i];//Secondary diagonal
    }

    if(n%2==1){ 
        sum -= matrix[n / 2][n / 2];//Middle element counted twice
    }

    cout<<"Sum of diagonals = "<<sum<<endl;
    return 0;
}