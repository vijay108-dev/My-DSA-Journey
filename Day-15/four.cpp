#include <iostream>
using namespace std;
//Total moves for bishop
int bishopMoves(int A,int B)
{
    int upLeft=min(A-1,B-1);
    int upRight=min(A-1,8-B);
    int downLeft=min(8-A,B -1);
    int downRight=min(8-A,8-B);
    return upLeft+upRight+downLeft+downRight;
}

int main()
{
    int A,B;
    cin>>A>>B;
    cout<<bishopMoves(A,B);
    
    return 0;
}
