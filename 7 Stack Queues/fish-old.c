int solution(int A[], int B[], int N) {
    
    int stackup[N];
    int fish=0;

    int i,k;
    
    for(i=0;i<N;i++)
        stackup[i]=0;
        
    k=0;
    for(i=(N-1);i>=0;i--){
        if(B[i]==1 && k==0){
            fish++;
        }else if(B[i]==1 && k!=0){
            while(k>0 && A[i]>stackup[k]){
                k--;
            }
            if(k==0)
                fish++;
        }else if(B[i]==0){
            k++;
            stackup[k]=A[i];
        }
    }

    return fish+k;
}
