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