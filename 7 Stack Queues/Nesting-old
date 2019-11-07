int solution(char *S) {
    
    char *l;
    int length=0;
    
    int i,k;
    
//length of string        
    l=S;
    while( *l != '\0'){
        length++;
        l++;
    }
    
    char array[length];

    k=1;
    array[0]='1';
    for(i=0;i<length;i++){
        if(S[i]=='('){
            array[k]=S[i];
            k++;
        }else{
            if(S[i]==')'){
                if(array[k-1] != '('){
                    return 0;
                }
            }
            k--;
            if(k<1)
            return 0;
        }
    }
    
    if(k==1)
        return 1;
    
    return 0;
}
