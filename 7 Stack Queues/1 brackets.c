/*
A string S consisting of N characters is considered to
be properly nested if any of the following conditions is true:
S is empty;
S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string;
S has the form "VW" where V and W are properly nested strings.

Write a function that, given a string S consisting of N characters,
returns 1 if S is properly nested and 0 otherwise.

For example, the string "{[()()]}" is properly nested but "([)()]" is not.
*/

int solution(char *S) {
    
    char *l;
    int length=0;
    
    int i,k;
    
    l=S;
    while( *l != '\0'){
        length++;
        l++;
    }
    
    char array[length];

    k=1;
    array[0]='1';
    for(i=0;i<length;i++){
       
        if(S[i]=='(' || S[i]=='{' || S[i]=='['){
            array[k]=S[i];
            k++;
        }else{
            if(S[i]==')'){
                if(array[k-1] != '('){
                    return 0;
                }
            }else if(S[i]=='}'){
                if(array[k-1] !='{'){
                    return 0;
                }
            }else if(S[i]==']'){
                if(array[k-1] !='['){
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
