#include<iostream>
using namespace std;
int main(){
    int a = 40;
    int *p = &a;

    cout << a <<endl; //prints value → 10
    cout << &a <<endl; //prints address of a
    cout << p <<endl;//prints address stored in pointer
    return 0;
}
// a → value = 10
// &a → address of a in memory
// p → pointer storing that address



//Why does it print 8 bytes (64-bit)?
// When you print a pointer, the size you see is related to the address size of your system.
// 64-bit Operating System
// Most modern systems (Mac, Linux, Windows) are 64-bit.
// Address size = 64 bits
// 64 bits = 8 bytes

// So:
// cout << sizeof(p);//8

// Because a pointer must store a 64-bit memory address.

// 2.32-bit System (older systems)
// Address size = 32 bits
// 32 bits = 4 bytes
// So pointer size would be 4 bytes.



// Memory example:
// Address      Value
// 1000         10

// Variable:
// a = 10

// Pointer:
// p = 1000

// So pointer stores 1000 (address) not 10 (value).


//A pointer stores the memory address of a variable, and it prints 8 bytes because your system uses 64-bit addressing (8 bytes).