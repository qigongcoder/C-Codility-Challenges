int solution(int A[], int N) {
    
//left hand occurance
    long LHO[N];
//Prefix left hand
    long PRL[N];
//how thick
    long THICK[N];
    
    long thickness=0;
    int intersec=0;
    long farlim;
    
    long i;
    
//Zero arrays    
    for(i=0;i<N;i++)
        LHO[i]=0;
    for(i=0;i<N;i++)
        PRL[i]=0;
    for(i=0;i<N;i++)
        THICK[i]=0;
    
//Left hand occurance
//Point is taken as Left hand occurance
    for(i=0;i<N;i++){
        if(A[i]>=i)
            LHO[0]++;
        else
            LHO[i-A[i]]++;
    }


//Prefix Left hand occurance
    PRL[0]=LHO[0];
    for(i=1;i<N;i++)
        PRL[i]=PRL[i-1]+LHO[i];
 
//Caclulate Thickness
