// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    
    int state[1000000]={0};
    int value=0;
    int i=0;

    for(i=0;i<N;i++){
//        printf("\n A[%d] is %d ",i,A[i]);
        if(state[A[i]]==0){
            state[A[i]]=1;
//            printf("A%d s%d ",A[i],state[A[i]]);
        }
        else if(state[A[i]]==1){
            state[A[i]]=0;
//            printf("A%d s%d ",A[i],state[A[i]]);            
        }
    }
    
    for(i=0;i<1000000;i++){
        if(state[i]==1)
            value=i;        
    }
    
    return value;
}
