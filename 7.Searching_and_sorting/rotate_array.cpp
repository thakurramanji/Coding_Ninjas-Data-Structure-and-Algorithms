
int gcd(int a, int b) {
    if(b==0)
        return a;
    
    return gcd(b, a%b);
}

void rotate(int *input, int d, int n)
{
    //Write your code here
    if(d==0)
        return ;
    d = d%n;
    int gCd = gcd(d,n);
    
    for(int i=0;i<gCd;i++) {
        int t = input[i];
        int j=i;
        
        while(1) {
            int k= j+d;
            if(k>=n)
                k=k-n;
            if(k==i)
                break;
            
            input[j]=input[k];
            j=k;
        }
        input[j]=t;
    }
}