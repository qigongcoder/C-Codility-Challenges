GenomicRangeQuery

struct Results solution(char *S, int P[], int Q[], int M) {

    struct Results result;
    int i;
    int *Ar1;
    int *Ar2;
    int *Ar3;
    int *Ar4;
    int length=0;
       
    i=0;
    while(S[i] != '\0'){
        i++;
    }
    length=i;
    
    Ar1=calloc(length,sizeof(int));
    Ar2=calloc(length,sizeof(int));
    Ar3=calloc(length,sizeof(int));
    Ar4=calloc(length,sizeof(int));
    
    result.A=calloc(M,sizeof(int));

    for (i=0;i<length;i++){
        if(S[i]==65){
            Ar1[i+1]=Ar1[i]+1;
            Ar2[i+1]=Ar2[i];
            Ar3[i+1]=Ar3[i];
            Ar4[i+1]=Ar4[i];
        }
        if(S[i]==67){
            Ar1[i+1]=Ar1[i];
            Ar2[i+1]=Ar2[i]+1;
            Ar3[i+1]=Ar3[i];
            Ar4[i+1]=Ar4[i];
        }
        if(S[i]==71){
            Ar1[i+1]=Ar1[i];
            Ar2[i+1]=Ar2[i];
            Ar3[i+1]=Ar3[i]+1;
            Ar4[i+1]=Ar4[i];
        }
