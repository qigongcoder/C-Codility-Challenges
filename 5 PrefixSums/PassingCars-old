int solution(int A[], int N) {
    
    int lastpass=0;
    int currentpass=0;
    long long totalpass=0;
    
    int i;
    
    for(i=(N-1);i>=0;i--){
        if(A[i]==0){
            totalpass+=lastpass+currentpass;
            lastpass=lastpass+currentpass;
            currentpass=0;
        }else{
            currentpass++;
        }
    }
    
    if(totalpass>1000000000)
        return -1;
    
    return totalpass;
}
