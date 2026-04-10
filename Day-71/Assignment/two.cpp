//Destructors are called in reverse order because objects are destroyed using LIFO (Last In, First Out) order of stack memory.


// Why this happens?
// 1. Stack works on LIFO
// The last object created is placed on top of memory (stack)
// When program ends or scope finishes → last object is removed first

// Just like a stack of plates:
// Last plate placed → first removed

// 2. Dependency safety
// If one object depends on another, destroying in reverse order avoids problems
// Example:
// A a;
// B b;
// b is created after a
// So b is destroyed first, then a

// This ensures:
// b doesn’t try to use a after a is destroyed