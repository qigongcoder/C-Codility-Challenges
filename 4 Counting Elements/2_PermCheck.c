#include <stdbool.h>

int solution(int A[], int N) {
    
    int test=0;
    int total=0;
    bool B[200000] = {false};
    int i;

    if(N==1){
        if(A[0]==1){
            return 1;
        }
        else{
            return 0;
        }
    }
        
    for(i=0;i<N;i++){
        if(A[i]>N)
            return 0;
        B[A[i]]=1;
    }
    
    for(i=1;i<(N+1);i++){
        total+=B[i];
    }
    
    if (total==N)
        test=1;
 
    return test;    
}
