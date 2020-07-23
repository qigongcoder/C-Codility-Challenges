int solution(int X, int A[], int N) {
 
    int arr[X+1];
    int falls=0;
    int goodleaves=0;
    
    int i;
    
    for(i=1;i<=X;i++){
        arr[i]=0;
    }
    
    for(i=0;i<N;i++){
        falls++;
        if(arr[A[i]]==0){
            goodleaves++;
            arr[A[i]]++;
        }
        if(goodleaves==X)
            return (falls-1);
    }
    return -1;
}
