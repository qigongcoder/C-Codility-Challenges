int solution(int A[], int N) {
    
    int i;
    int arrsum=0;
    int norsum=0;
                
    for(i=0;i<N;i++){
        norsum+=i+1;
        arrsum+=A[i];
    }
    
    return (norsum-(arrsum-N-1));
}
