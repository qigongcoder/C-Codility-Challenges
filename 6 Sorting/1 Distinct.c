/*
Write a function that, given an array A consisting of N integers,
returns the number of distinct values in array A.

For example, given array A consisting of six elements such that:
 A[0] = 2    A[1] = 1    A[2] = 1
 A[3] = 2    A[4] = 3    A[5] = 1
the function should return 3, because there are 3 distinct values appearing in array A, namely 1, 2 and 3.
*/

int solution(int A[], int N) {
    
    int max=0;
    int min=0;
    int num=0;
    int i;
    
    int arr[4000000];
  
    for(i=0;i<N;i++){
        arr[A[i]+2000000]++;
        if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
    }

    for(i=(min+2000000);i<=(max+2000000);i++){
        if(arr[i]>0)
            num++;
    }

    return num;

}
