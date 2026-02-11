#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v= {1, 2, 3, 2, 2, 4};
    int count =0;
    for(int i=0;i<v.size();i++){
        if (v[i] == 2)
            count++;
    }
    cout<<count<<endl;
}
