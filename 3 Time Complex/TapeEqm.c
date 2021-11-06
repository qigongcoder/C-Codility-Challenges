/*
A non-empty array A consisting of N integers is given.
Array A represents numbers on a tape. Any integer P,
such that 0 < P < N, splits this tape into two non-empty
parts: A[0], A[1], ..., A[P − 1] and A[P], A[P + 1], ..., A[N − 1].
The difference between the two parts is the
value of: |(A[0] + A[1] + ... + A[P − 1]) − (A[P] + A[P + 1] + ... + A[N − 1])|

In other words, it is the absolute difference between the
sum of the first part and the sum of the second part.

Write a function that, given a non-empty array A of N integers,
returns the minimal difference that can be achieved.


For example, consider array A such that:
  A[0] = 3
  A[1] = 1
  A[2] = 2
  A[3] = 4
  A[4] = 3
We can split this tape in four places:
P = 1, difference = |3 − 10| = 7
P = 2, difference = |4 − 9| = 5
P = 3, difference = |6 − 7| = 1
P = 4, difference = |10 − 3| = 7
the function should return 1.

*/

int mod(int a){
    if(a<0)
        a=(-1)*a;
    return a;
}

int solution(int A[], int N) {

    long int LHS=0,Total=0,min_diff,cur_diff,i;
    
    for(i=0;i<N;i++)
        Total+=A[i];

    min_diff=mod(A[0]-(Total-A[0]));
    
    for(i=0;i<(N-1);i++){

        Total-=A[i];
        LHS+=A[i];

        cur_diff=mod(LHS-Total);

        if(cur_diff<min_diff)
            min_diff=cur_diff;
    }
    
    return min_diff;
}
