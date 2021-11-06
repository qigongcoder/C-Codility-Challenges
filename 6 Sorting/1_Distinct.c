int solution(int A[], int N) {
    
    int max=0;
    int min=0;
    int num=0;
    int i;
    
    int arr[4000000];
  
    for(i=0;i<N;i++){
        arr[A[i]+2000000]++;
        if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
    }

    for(i=(min+2000000);i<=(max+2000000);i++){
        if(arr[i]>0)
            num++;
    }

    return num;

}
