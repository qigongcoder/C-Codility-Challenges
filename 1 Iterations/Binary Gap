int solution(int N) {
    
    /*holds the state of each individual bit in an element of an array*/
    int array[32]={0};

    /*while traversing the array, records if the while loop is currently within a bit gap*/
    int state=0;
    
    /*if within a bit gap, records the length*/
    int current=0;

    /*records maximum bit gap found so far*/
    int max=0;

    int i;


    /*Use bit masking to transfer each bit into an element of an array*/
    for(i=0;i<32;i++){
        array[i]=((N&(1<<(31-i)))>>(31-i));
    }


    i=0;
    while (i<32){    
        if((array[i]==1) && (array[i+1]==1)){
        }
        /*condition for entering a bit gap*/
        else if((array[i]==1) && (array[i+1]==0)){
            state=1;
            current=0;
        }
        /*condition while within a bit gap*/
        else if((array[i]==0) && (array[i+1]==0) && (state==1)){
                current++;
        }
        /*condition on leaving a bit gap*/
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
