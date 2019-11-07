int solution(int A[], int N) {
    
    int min;
    int mintemp;
    int left;
    int right=0;
    
    int i;
   
    left=A[0];
    
    for(i=1;i<N;i++)
        right+=A[i];

    min=left-right;
    if(min<0)
        min=-1*min;
    
    for(i=1;i<(N-1);i++){
        left+=A[i];
        right-=A[i];

        mintemp=left-right;
        if(mintemp<0)
            mintemp=-1*mintemp;

        if(mintemp<min)
            min=mintemp;
    }    
    return min;    
}
