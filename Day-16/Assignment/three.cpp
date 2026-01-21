#include <iostream>
using namespace std;
int main(){
    int n;
    int key;
    int index = -1;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<" Enter "<<n<<" elements:\n";
    for(int i=0;i<n;i++)
     cin>>arr[i];
    cout<<"Enter the value of search: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    cout<<index<<endl;

    return 0;
}
