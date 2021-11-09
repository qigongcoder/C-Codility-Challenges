/*
Write a function that, given an array A of N integers, returns the
smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
*/

#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int compare (const void *a, const void* b)
{
  return ( *(int*)a - *(int*)b );
}

int solution(int A[], int N) {

  int i;
  int smallest=1;

   qsort (A, N, sizeof(int), compare);

    for(i=0;i<N;i++)
        if(A[i]==smallest)
            smallest++;
 
  return smallest;
}