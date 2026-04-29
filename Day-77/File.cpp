
#include<iostream>
#include<fstream>
using namespace std;
int main(){

    vector<int>arr(5);
    cout<<"Enter the Input"<<" ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    //Open the file
    ofstream fout;
    fout.open("zero.txt");
    fout<<"Original Data\n";
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
    //fout.close();

    fout<<"\nSorted data\n";
    sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }

    return 0;
}