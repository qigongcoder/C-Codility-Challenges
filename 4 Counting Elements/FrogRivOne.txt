int solution(int X, int A[], int N) {

    int B[200000]={0};
    int i;
    
    for(i=0;(i<N && X>0);i++){
        if(B[A[i]]==0){
            B[A[i]]=1;
            X--;
        }
    }
    
    if(X>0)
        i=0;
    
    return i-1;
    
}