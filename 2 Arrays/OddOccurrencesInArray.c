
int solution(int A[], int N) {
    
    int state[1000000]={0};
    int value=0;
    int i=0;

    for(i=0;i<N;i++){
        if(state[A[i]]==0){
            state[A[i]]=1;
        }
        else if(state[A[i]]==1){
            state[A[i]]=0;
        }
    }
    
    for(i=0;i<1000000;i++){
        if(state[i]==1)
            value=i;        
    }
    
    return value;
}
