struct Results solution(int A[], int N, int K) {
    struct Results result;

    int newarr[100];
    int rotation=0;
    int newloc=0;
    int i;
    
    result.A=calloc(N,sizeof(int));

    for(i=0;i<N;i++){
        newarr[i]=A[i];
    }

    rotation=K%N;
//    printf("rotation %d\n",rotation);

    for(i=0;i<N;i++){
        newloc=i+rotation;
            if(newloc>(N-1)){
                newloc=newloc-N;
                newarr[newloc]=A[i];
            }
            else{
                newarr[i+rotation]=A[i];
            }
    }
    

    for(i=0;i<N;i++){
        result.A[i]=newarr[i];
    }
 
//    for(i=0;i<N;i++)
//        printf("%d ",result.A[i]);
//    printf("\n");

    result.N = N;
    return result;
}
