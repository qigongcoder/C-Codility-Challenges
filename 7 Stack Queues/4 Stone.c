/*
You are going to build a stone wall. The wall should be straight
and N meters long, and its thickness should be constant; however,
it should have different heights in different places. The height
of the wall is specified by an array H of N positive integers.
H[I] is the height of the wall from I to I+1 meters to the
right of its left end. In particular, H[0] is the height of
the wall's left end and H[N−1] is the height of the wall's right end.

The wall should be built of cuboid stone blocks (that is, all sides
of such blocks are rectangular). Your task is to compute the
minimum number of blocks needed to build the wall.


Write a function that, given an array H of N positive integers
specifying the height of the wall, returns the minimum number
of blocks needed to build it.

For example, given array H containing N = 9 integers:
  H[0] = 8    H[1] = 8    H[2] = 5
  H[3] = 7    H[4] = 9    H[5] = 8
  H[6] = 7    H[7] = 4    H[8] = 8
the function should return 7.
*/

int solution(int H[], int N) {
    
    int stack[N];
    int less=0;
    
    int i=0;
    int j;


    stack[0]=0;
    j=1;
    stack[1]=H[0];
    for(i=1;i<N;i++){
        if(H[i]==H[i-1]){
            less++;
        }
        if(H[i]>H[i-1]){
            j++;
            stack[j]=H[i];
        }
        if(H[i]<H[i-1]){
            while(H[i]<stack[j])
               j--;
            if(H[i]==stack[j]){
                less++;
            }else{
                j++;
                stack[j]=H[i];
            }
        }
    }
    return (N-less);
}
