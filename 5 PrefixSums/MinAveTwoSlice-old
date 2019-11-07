int solution(int A[], int N) {
    
    float currentave2;
    float smallave2;
    int smallavepos2=-1;
    
    float currentave3;
    float smallave3;
    int smallavepos3=-1;

    int i;

    smallave2=(A[N-1]+A[N-2])/2.0;
        
    for(i=(N-1);i>0;i--){
        currentave2=(A[i]+A[i-1])/2.0;
        if(currentave2<=smallave2){
            smallave2=currentave2;
            smallavepos2=i-1;
        }
    }

    if(N==2)
        return smallavepos2;
 
    smallave3=(A[N-1]+A[N-2]+A[N-3])/3.0;
    
    for(i=(N-1);i>1;i--){
        currentave3=(A[i]+A[i-1]+A[i-2])/3.0;
        if(currentave3<=smallave3){
            smallave3=currentave3;
            smallavepos3=i-2;
        }
    }

    if(smallave2<smallave3)
        return smallavepos2;
    if(smallave3<smallave2)
        return smallavepos3;
    if(smallave2==smallave3)
        return ((smallavepos2<=smallavepos3)?smallavepos2:smallavepos3);
}
