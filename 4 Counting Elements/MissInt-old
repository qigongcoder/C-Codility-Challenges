int solution(int A[], int N) {
    
    int i;
    int arr[100010];

	for(i=0;i<100010;i++)
	    arr[i]=0;

    for(i=0;i<N;i++){
        if(A[i]<1)
            A[i]=0;
    }

    for(i=0;i<N;i++){
        if(A[i]>0 && A[i]<=100010)
            arr[A[i]]++;
    }

    for(i=1;i<(N+10);i++){
        if(arr[i]==0)
            return i;
    }
    
    return 1;
}
