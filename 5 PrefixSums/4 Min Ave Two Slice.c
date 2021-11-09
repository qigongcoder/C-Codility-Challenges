/*
A non-empty array A consisting of N integers is given.
A pair of integers (P, Q), such that 0 ≤ P < Q < N, is
called a slice of array A (notice that the slice contains at
least two elements). The average of a slice (P, Q) is the
sum of A[P] + A[P + 1] + ... + A[Q] divided by the length
of the slice. To be precise, the average equals
(A[P] + A[P + 1] + ... + A[Q]) / (Q − P + 1).

The goal is to find the starting position of a slice whose average is minimal.

For example, array A such that:
    A[0] = 4
    A[1] = 2
    A[2] = 2
    A[3] = 5
    A[4] = 1
    A[5] = 5
    A[6] = 8
contains the following example slices:
slice (1, 2), whose average is (2 + 2) / 2 = 2;
slice (3, 4), whose average is (5 + 1) / 2 = 3;
slice (1, 4), whose average is (2 + 2 + 5 + 1) / 4 = 2.5.
The function should return 1.
*/

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
