int solution(int A[], int N) {
    
    int sum=0;
    int tvalue=0;
    int i;
        
    tvalue=((1+(long)N)*(2+(long)N))>>1;
   

    for(i=0;i<N;i++)
        sum+=A[i];
    
    return (tvalue-sum);
    
}
