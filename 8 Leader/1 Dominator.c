/*
An array A consisting of N integers is given. The dominator of
array A is the value that occurs in more than half of the elements of A.

Write a function that, given an array A consisting of N integers,
returns index of any element of array A in which the dominator
of A occurs. The function should return −1 if array A does not have a dominator.

For example, consider array A such that
 A[0] = 3    A[1] = 4    A[2] =  3
 A[3] = 2    A[4] = 3    A[5] = -1
 A[6] = 3    A[7] = 3
The dominator of A is 3 because it occurs in 5 out of 8 elements
of A (namely in those with indices 0, 2, 4, 6 and 7) and 5 is
more than a half of 8.
The function may return 0, 2, 4, 6 or 7, as explained above.
*/

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N) {
    
    int sorted[N];
    int count=0;
    int leader;

    int i=0;
    
    if(N==0)
        return -1;
    
    if(N==1)
        return 0;
   
    for(i=0;i<N;i++)
        sorted[i]=A[i];
        
    qsort(sorted, N, sizeof(int), cmpfunc);
    
    leader=sorted[N/2];

    for(i=0;i<N;i++){
        if(sorted[i]==leader)
            count++;
    }

    if(count<=(N/2))
        return -1;
        
    for(i=0;i<N;i++){
        if(A[i]==leader)
            return i;
    }
    
    return -1;
}
