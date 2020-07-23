int solution(int H[], int N) {
    
    int stack[N];
    int less=0;
    
    int i=0;
    int j;


    stack[0]=0;
    j=1;
    stack[1]=H[0];
    for(i=1;i<N;i++){
        if(H[i]==H[i-1]){
            less++;
        }
        if(H[i]>H[i-1]){
            j++;
            stack[j]=H[i];
        }
        if(H[i]<H[i-1]){
            while(H[i]<stack[j])
               j--;
            if(H[i]==stack[j]){
                less++;
            }else{
                j++;
                stack[j]=H[i];
            }
        }
    }
    return (N-less);
}
