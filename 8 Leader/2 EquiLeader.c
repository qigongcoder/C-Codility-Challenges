/*
A non-empty array A consisting of N integers is given.
The leader of this array is the value that occurs in more
than half of the elements of A.

An equi leader is an index S such that 0 ≤ S < N − 1 and
two sequences A[0], A[1], ..., A[S] and A[S + 1], A[S + 2], ..., A[N − 1]
have leaders of the same value.

Write a function that, given a non-empty array A consisting of N integers,
returns the number of equi leaders.

For example, given array A such that:
    A[0] = 4
    A[1] = 3
    A[2] = 4
    A[3] = 4
    A[4] = 4
    A[5] = 2
we can find two equi leaders:
0, because sequences: (4) and (3, 4, 4, 4, 2) have the same leader, whose value is 4.
2, because sequences: (4, 3, 4) and (4, 4, 2) have the same leader, whose value is 4.
Therefore the function should return 2.
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
        return A[0];
   
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
