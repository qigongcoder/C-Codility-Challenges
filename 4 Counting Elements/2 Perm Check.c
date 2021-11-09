/*
A non-empty array A consisting of N integers is given. A permutation
is a sequence containing each element from 1 to N once, and only once.

Write a function that, given an array A, returns 1 if array A
is a permutation and 0 if it is not.

For example, given array A such that:
    A[0] = 4
    A[1] = 1
    A[2] = 3
    A[3] = 2
the function should return 1.
*/

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
