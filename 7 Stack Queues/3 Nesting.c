/*
A string S consisting of N characters is called properly nested if:
S is empty;
S has the form "(U)" where U is a properly nested string;
S has the form "VW" where V and W are properly nested strings.
For example, string "(()(())())" is properly nested but string "())" isn't.

Write a function that, given a string S consisting of N characters,
returns 1 if string S is properly nested and 0 otherwise.

For example, given S = "(()(())())", the function should return 1 and
given S = "())", the function should return 0, as explained above.
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
