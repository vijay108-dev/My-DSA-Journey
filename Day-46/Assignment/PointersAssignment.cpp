#include <iostream>
#include <string>
using namespace std;
int main() {
    //Print the address of the first index of the char array
    char chArr[] = "Vijay";
    cout<<"Address of first index of char array: "<<(void*)&chArr[0]<<endl; //Address of first index of char array: 0x16bca2b54



    //Print the address of the char variable
    char ch = 'A';
    cout<<"Address of char variable: "<<(void*)&ch<<endl; //Address of char variable: 0x16bca2b53



    //Print the address of string
    string str="Vijay Singh";
    cout<<"Address of string object: "<<&str<<endl; //Address of string object: 0x16bca2b38

    cout<<endl;



    //Difference between arr and &arr
    int arr[5] = {1,2,3,4,5};

    cout<<"arr (address of first element): "<<arr<<endl; //arr (address of first element): 0x16bca2b60
    cout<<"&arr (address of whole array): "<<&arr<<endl; //&arr (address of whole array): 0x16bca2b60

    cout<<endl;



    //Pointer storing address of last element and printing array in reverse
    int *ptr = &arr[4]; // pointer pointing to last element

    cout<<"Array in reverse using pointer: ";
    for(int i=4;i>=0;i--){
        cout<<*ptr<<" ";       //Array in reverse using pointer: 5 4 3 2 1 
        ptr--;
    }
    cout<<endl;



    return 0;
}