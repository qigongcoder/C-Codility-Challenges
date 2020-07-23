int solution(int A[], int N) {
    
    int array[1000000];
    int i;
    
    for(i=0;i<(N+1);i++)
        array[i]=0;
    
    for(i=0;i<N;i++){
        if(A[i]>N)
            return 0;
        array[A[i]]++;
    }

    for(i=1;i<(N+1);i++){
        if(array[i]!=1)
            return 0;
    }

    return 1;
    
}
