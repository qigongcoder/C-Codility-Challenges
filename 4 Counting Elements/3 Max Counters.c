struct Results solution(int N, int A[], int M) {

    struct Results result;
    int i;
    int lastmaxed=0;
    int currentmax=0;
    
    result.C=calloc(N,sizeof(int));
    
    for(i=0;i<M;i++){
        if(A[i]<=N){
            if(result.C[A[i]-1]<lastmaxed){
                result.C[A[i]-1]=lastmaxed+1;
            }else{
                result.C[A[i]-1]++;
            }
            if(result.C[A[i]-1]>currentmax){
                currentmax=result.C[A[i]-1];
            }    
        }else{
            lastmaxed=currentmax;
        }
    }
        
    for(i=0;i<N;i++)
        if(result.C[i]<lastmaxed)
            result.C[i]=lastmaxed;

    result.L = N;
    return result;
}
