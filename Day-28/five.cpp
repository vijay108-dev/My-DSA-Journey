int removeDuplicates(int* A, int n1) 
{
    if(n1==0)
    return 0;
    int start=0;//slow pointer
    int end;//fast pointer
    for(end=1;end<n1;end++)
    {
        if(A[start]!=A[end])
        {
            start++;
            A[start]=A[end];
        }
    }
    return start+1;
}