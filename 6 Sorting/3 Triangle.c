/*
An array A consisting of N integers is given. A triplet (P, Q, R)
is triangular if 0 ≤ P < Q < R < N and:
A[P] + A[Q] > A[R],
A[Q] + A[R] > A[P],
A[R] + A[P] > A[Q].

Write a function that, given an array A consisting of N integers,
returns 1 if there exists a triangular triplet for this array and
returns 0 otherwise.

For example, consider array A such that:
  A[0] = 10    A[1] = 2    A[2] = 5
  A[3] = 1     A[4] = 8    A[5] = 20
Triplet (0, 2, 4) is triangular.
*/

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N) {
    
    int i;
    
    if(N<3)
        return 0;
        
    for(i=0;i<N;i++)
        if(A[i]<1)
            A[i]=0;
       
    qsort(A, N, sizeof(int), cmpfunc);
 
    for(i=0;i<(N-2);i++)
        if(A[i]>=0 && ((long long)A[i]+(long long)A[i+1])>(long long)A[i+2])
            return 1;

    return 0;
}
