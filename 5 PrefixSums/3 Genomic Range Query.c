/*
A DNA sequence can be represented as a string consisting of the letters
A, C, G and T, which correspond to the types of successive nucleotides
in the sequence. Each nucleotide has an impact factor, which is
an integer. Nucleotides of types A, C, G and T have impact
factors of 1, 2, 3 and 4, respectively. You are going to answer
several queries of the form: What is the minimal impact factor
of nucleotides contained in a particular part of the given DNA sequence?

The DNA sequence is given as a non-empty string S = S[0]S[1]...S[N-1]
consisting of N characters. There are M queries, which are given in
non-empty arrays P and Q, each consisting of M integers.
The K-th query (0 ≤ K < M) requires you to find the minimal impact
factor of nucleotides contained in the DNA sequence between positions
P[K] and Q[K] (inclusive).

For example, consider string S = CAGCCTA and arrays P, Q such that:
    P[0] = 2    Q[0] = 4
    P[1] = 5    Q[1] = 5
    P[2] = 0    Q[2] = 6
the function should return the values [2, 4, 1].
*/

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
