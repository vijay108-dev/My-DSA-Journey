// for(int i=1; i<=n*n; i++)
// O(n²)
// Θ(n²)
// Ω(n²)


// for(int i=1; i<=n*n; i+=2)
// O(n²)
// Θ(n²)
// Ω(n²)



// for(int i=1; i<=n; i++)
//   for(int j=1; j<=n; j+=5)

// Outer loop → n
// Inner loop → n/5
// Total ≈ n × n = n²
// O(n²)
// Θ(n²)
// Ω(n²)




// for(int i=1; i<=n; i++)
//   for(int j=i; j<=n; j++)
// Iterations:
// (n + (n-1) + (n-2) + ... + 1)
// = n(n+1)/2
// ≈ n²
// O(n²)
// Θ(n²)
// Ω(n²)


// for(int i=1; i<=n; i++)
//   for(int j=1; j<=n; j*=4)
// Outer loop → n
// Inner loop → log₄n ≈ log n
// O(nlog n)
// Θ(nlog n)
// Ω(nlog n)




// for(int i=1; i<=n; i*=2)
//   for(int j=1; j<=i; j++)
// Outer loop → log n
// Inner loop → i (1,2,4,8…)
// Total work:
// 1 + 2 + 4 + ... + n = 2n
// O(n)
// Θ(n)
// Ω(n)





// for(int i=1; i<=n; i++)
//   for(int j=1; j<=n; j++)
//     for(int k=1; k<=n; k*=3)
// i loop → n
// j loop → n
// k loop → log₃n ≈ log n
// O(n²log n)
// Θ(n²log n)
// Ω(n²log n)





// for(int i=1; i<=n; i++)
//   for(int j=1; j<=n; j++)
//     for(int k=1; k<=n; k++)

// Simple 3 nested loops
// O(n³)
// Θ(n³)
// Ω(n³)