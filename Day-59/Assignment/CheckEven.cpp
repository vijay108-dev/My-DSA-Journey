bool isEven(int n){
    if (n==0)
        return true;

    if(n==1)
        return false;

    return isEven(n-2);
}
// Time Complexity: O(n)
// Space Complexity: O(n)