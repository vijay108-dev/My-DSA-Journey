// #include <iostream>
// #include <vector>
// using namespace std;
// int winner(vector<bool> &person, int n, int index, int person_left, int k)
// {
//     // base case: sirf 1 person bacha
//     if (person_left==1)
//     {
//         for (int i=0;i<n;i++)
//         {
//             if(person[i]==0)
//                 return i;
//         }
//     }

//     // k-th person find karna
//     int kill= (k-1) % person_left;

//     while (kill--)
//     {
//         index = (index+1) % n;

//         // skip already eliminated
//         while(person[index]==1)
//         {
//             index = (index+1)%n;
//         }
//     }

//     // eliminate current person
//     person[index]=1;

//     // next alive person pe jao
//     while (person[index]==1)
//     {
//         index = (index+1)%n;
//     }

//     // recursion
//     return winner(person, n, index, person_left-1, k);
// }

// int main()
// {
//     int n=5;   // total persons
//     int k=2;   // every k-th person eliminated
//     vector<bool>person(n,0); // 0 = alive, 1 = dead
//     int ans =winner(person, n, 0, n, k);
//     cout<< "Winner index: "<<ans<<endl;

//     return 0;
// }


//Method = 2 TC = O(n)
#include <iostream>
using namespace std;
int winner(int n, int k)
{
    // base case
    if(n==1)
        return 0;

    return (winner(n-1, k)+k)%n;
}
int main(){
    int n =5, k =2;
    cout<<"Winner index: "<<winner(n,k)<<endl;
}