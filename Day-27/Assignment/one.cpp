//Prove: vector.push_back() Average Time Complexity = O(1)
// vector internally array use karta hai
// Jab vector full ho jata hai
// Naya double size ka array banta hai
// Purane elements copy hote hain (costly)
// Lekin ye costly operation kabhi-kabhi hota hai

//Agar hum n elements push kare:
// Total copying ≈ n
// Total operations ≈ n
//Average per push_back = O(1)


// push_back():
// Worst case → O(n)
// Average→ O(1) 