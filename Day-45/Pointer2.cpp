#include <iostream>
using namespace std;
int main(){
    int num =10;
    int *p = &num;
    *p =*p + 5;  //increment using pointer
    cout<<num<<endl;

    return 0;
}


// A Symbol Table is a data structure used by the compiler to store information about variables, functions, and identifiers used in a program.
// It basically answers questions like:
// What is the name of the variable?
// What is its data type?
// Where is it stored in memory (address)?
// What is its scope?
// This is heavily used in the field of Compiler Design.



// What Compiler Stores in Symbol Table
// For each variable it stores:

// Field	      Meaning
// Name	          variable name
// Type	          int, float, int* etc
// Scope	      local/global
// Address	      memory location
// Size	          bytes used