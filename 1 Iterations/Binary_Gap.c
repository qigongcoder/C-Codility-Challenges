/*
A binary gap within a positive integer N is any maximal
sequence of consecutive zeros that is surrounded by ones
at both ends in the binary representation of N.

For example, number 9 has binary representation 1001
and contains a binary gap of length 2.

Write a function that, given a positive integer N, returns the length of
its longest binary gap.

N is an integer within the range [1..2,147,483,647].
*/

int solution(int N) {
    
    int array[32]={0};

    int state=0;
    
    int current=0;

    int max=0;

    int i;

    for(i=0;i<32;i++){
        array[i]=((N&(1<<(31-i)))>>(31-i));
    }


    i=0;
    while (i<32){    
        if((array[i]==1) && (array[i+1]==1)){
        }
        else if((array[i]==1) && (array[i+1]==0)){
            state=1;
            current=0;
        }
        else if((array[i]==0) && (array[i+1]==0) && (state==1)){
                current++;
        }
        else if((array[i]==0) && (array[i+1]==1) && (state==1)){
                current++;
                state=0;
                if(current>max)
                    max=current;
        }
        i++;
    }
    return max;
}
