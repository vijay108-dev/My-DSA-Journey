#include <iostream>
using namespace std;
void toh(int n, char source, char helper, char dest){
    // base case
    if(n==1){
        cout<<"Move disk "<<n<<" from "<<source<<" to "<<dest<<endl;
        return;
    }

    // step 1: n-1 disks source → helper
    toh(n-1, source, dest, helper);

    // step 2: nth disk source → dest
    cout<<"Move disk "<<n <<" from "<<source<<" to "<< dest<<endl;

    // step 3: n-1 disks helper → dest
    toh(n-1, helper, source, dest);
}
int main(){
    int n=3;
    toh(n,'A','B','C'); // A = source, B = helper, C = destination

    return 0;
}