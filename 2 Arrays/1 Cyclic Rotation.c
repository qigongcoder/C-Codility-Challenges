/*
An array A consisting of N integers is given. Rotation of the array means
that each element is shifted right by one index, and the
last element of the array is moved to the first place.

For example, the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7].

Write a function that, given an array A consisting of N integers and an
integer K, returns the array A rotated K times.
*/

struct Results solution(int A[], int N, int K) {
    struct Results result;

    int newarr[100];
    int rotation=0;
    int newloc=0;
    int i;
    
    result.A=calloc(N,sizeof(int));

    for(i=0;i<N;i++){
        newarr[i]=A[i];
    }

    rotation=K%N;

    for(i=0;i<N;i++){
        newloc=i+rotation;
            if(newloc>(N-1)){
                newloc=newloc-N;
                newarr[newloc]=A[i];
            }
            else{
                newarr[i+rotation]=A[i];
            }
    }
    

    for(i=0;i<N;i++){
        result.A[i]=newarr[i];
    }
 
     result.N = N;
    return result;
}
