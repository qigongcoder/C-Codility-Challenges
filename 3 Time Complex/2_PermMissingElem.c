/*
An array A consisting of N different integers is given.
The array contains integers in the range [1..(N + 1)],
which means that exactly one element is missing.

Your goal is to find that missing element.

Write a function that, given an array A, returns the value of the missing element.

For example, given array A such that:
  A[0] = 2
  A[1] = 3
  A[2] = 1
  A[3] = 5
the function should return 4, as it is the missing element.
*/

int solution(int A[], int N) {
    
    int sum=0;
    int tvalue=0;
    int i;
        
    tvalue=((1+(long)N)*(2+(long)N))>>1;
   

    for(i=0;i<N;i++)
        sum+=A[i];
    
    return (tvalue-sum);
    
}
