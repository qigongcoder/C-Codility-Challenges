int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N) {
    
    int sorted[N];
    int count=0;
    int leader;
//    int location=0;

    int i=0;
/*
    printf("A[i] ");
    for(i=0;i<N;i++)
        printf("%d ",A[i]);
    printf("\n");
*/
    
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
//    return location;
        
}
