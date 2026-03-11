//What is void* and its use case
// void* = generic pointer
// Ye kisi bhi data type ka address store kar sakta hai.

// Example:
// int a = 10;
// void* ptr = &a;

// Lekin void* ko directly dereference nahi kar sakte.

// Correct way:
// int a = 10;
// void* ptr = &a;

// cout << *(int*)ptr;

// Use case
// Generic functions
// Memory allocation (malloc)
// Low level programming



//2. What is static_cast in C++
// static_cast C++ ka type conversion operator hai.
// Ye ek safe way hai type change karne ka.

// Example:
// int a = 10;
// double b = static_cast<double>(a);
// cout << b; //10


// Meaning
// int → double
// C-style cast:
// (double)a
// C++ preferred:
// static_cast<double>(a)


// 3 Difference between
// const char *str = "Hello, World!";
// char *str = "Hello, World!";

// const char *str = "Hello, World!";
// String read-only hoti hai.
// Modify nahi kar sakte.

// str[0] = 'h'; //error
// char *str = "Hello, World!";

// Old C-style hai.
// C++ me string literal read-only hoti hai, isliye modify karna undefined behaviour hai.

// Correct modern C++ way
// const char* str = "Hello";
// ya
// string str = "Hello";




// 4 Complete code (string length function)
#include <iostream>
using namespace std;
int calculateLength(const char *str){
    int length = 0;

    // Calculate the length of string
    while(str[length]!='\0'){
        length++;
    }
    return length;
}
int main(){
    const char *myString = "Vijay Singh";
    cout<<"Length of the string: "<<calculateLength(myString)<<endl;

    return 0;
}
