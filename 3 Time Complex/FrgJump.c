int solution(int X, int Y, int D) {
    
    int R;
    
    if(X==Y)
        R=0;
    else if ((Y-X)<=D)
        R=1;
    else{
        R=(Y-X)/D;
        if(((Y-X)%D)!=0)
            R++;
        }
    
    return R;
}
