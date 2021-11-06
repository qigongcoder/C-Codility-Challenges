/*
A non-empty array A consisting of N integers is given.
The array contains an odd number of elements, and each
element of the array can be paired with another element
that has the same value, except for one element that is left unpaired.

For example, in array A such that:
  A[0] = 9  A[1] = 3  A[2] = 9
  A[3] = 3  A[4] = 9  A[5] = 7
  A[6] = 90
the element at index 5 has value 7 and is unpaired.

Write a function that, given an array A consisting of N
integers fulfilling the above conditions, returns
the value of the unpaired element.
*/

int solution(int A[], int N) {
    
    int state[1000000]={0};
    int value=0;
    int i=0;

    for(i=0;i<N;i++){
        if(state[A[i]]==0){
            state[A[i]]=1;
        }
        else if(state[A[i]]==1){
            state[A[i]]=0;
        }
    }
    
    for(i=0;i<1000000;i++){
        if(state[i]==1)
            value=i;        
    }
    
    return value;
}
