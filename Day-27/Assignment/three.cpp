#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v={5, 2, 9, 1, 7};
    int mini =v[0];
    int maxi= v[0];
    for (int i=1;i<v.size();i++){
        if(v[i]<mini) 
        mini=v[i];
        if(v[i]>maxi) 
        maxi =v[i];
    }

    cout<<mini<<endl<<maxi<<endl;
}
