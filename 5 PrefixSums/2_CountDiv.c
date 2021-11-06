int solution(int A, int B, int K) {
 
    int a=0;
    int b;
    
    b=B/K;
    
    if(A>0){
        a=(A-1)/K;        
    }else{
        b++;
    }
    
    return b-a;
 
}
