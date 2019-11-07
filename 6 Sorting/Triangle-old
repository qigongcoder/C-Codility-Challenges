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
