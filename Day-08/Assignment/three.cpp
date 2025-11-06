#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=n;col>=n-row+1;col--){
            cout <<col << " ";
        }
        cout<<endl;
    }

    // ---------- Fourth Pattern ----------
    cout << "\nEnter n for fourth pattern: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        char ch = 'A' + n - 1;   // Start from E if n = 5
        for (int col = 1; col <= row; col++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }

    return 0;
}
