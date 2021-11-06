int solution(int A[], int N) {

    int i,j;
    int max1=-1001;
    int max2=-1001;
    int max3=-1001;
    
    int min1=1001;
    int min2=1001;
            
    for(i=0;i<N;i++){
        if(A[i]>=max1){
            max3=max2;
            max2=max1;
            max1=A[i];
        }else if(A[i]>=max2 && A[i]<max1){
            max3=max2;
            max2=A[i];
        }else if(A[i]>=max3){
            max3=A[i];
        }
        if(A[i]<=min1){
            min2=min1;
            min1=A[i];
        }else if(A[i]<=min2 && A[i]>min1){
            min2=A[i];
        }
    }

    if((max1*max2*max3)>(max1*min1*min2)){
        return (max1*max2*max3);
    }else{
        return (max1*min1*min2);
    }
}
