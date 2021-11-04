
int mod(int a){
    if(a<0)
        a=(-1)*a;
    return a;
}

int solution(int A[], int N) {

    long int LHS=0,Total=0,min_diff,cur_diff,i;
    
    for(i=0;i<N;i++)
        Total+=A[i];

    min_diff=mod(A[0]-(Total-A[0]));
    
    for(i=0;i<(N-1);i++){

        Total-=A[i];
        LHS+=A[i];

        cur_diff=mod(LHS-Total);

        if(cur_diff<min_diff)
            min_diff=cur_diff;
    }
    
    return min_diff;
}
