/*
A non-empty array A consisting of N integers is given. The product of
triplet (P, Q, R) equates to A[P] * A[Q] * A[R] (0 ≤ P < Q < R < N).

Write a function that, given a non-empty array A, returns the
value of the maximal product of any triplet.

For example, array A such that:
  A[0] = -3
  A[1] = 1
  A[2] = 2
  A[3] = -2
  A[4] = 5
  A[5] = 6
contains the following example triplets:
(0, 1, 2), product is −3 * 1 * 2 = −6
(1, 2, 4), product is 1 * 2 * 5 = 10
(2, 4, 5), product is 2 * 5 * 6 = 60
Therefore the function should return 60, as the product
of triplet (2, 4, 5) is maximal.
*/

int solution(int A[], int N) {

    int i,j;
    int max1=-1001;
    int max2=-1001;
    int max3=-1001;
    
    int min1=1001;
    int min2=1001;
            
    for(i=0;i<N;i++){
        if(A[i]>=max1){
            max3=max2;
            max2=max1;
            max1=A[i];
        }else if(A[i]>=max2 && A[i]<max1){
            max3=max2;
            max2=A[i];
        }else if(A[i]>=max3){
            max3=A[i];
        }
        if(A[i]<=min1){
            min2=min1;
            min1=A[i];
        }else if(A[i]<=min2 && A[i]>min1){
            min2=A[i];
        }
    }

    if((max1*max2*max3)>(max1*min1*min2)){
        return (max1*max2*max3);
    }else{
        return (max1*min1*min2);
    }
}
