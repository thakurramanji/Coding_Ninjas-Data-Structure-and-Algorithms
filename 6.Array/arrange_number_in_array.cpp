void arrange(int *arr, int n)
{
    int st = 1;
    int i=0;
    while(st<=n) {
        arr[i++]=st;
        st+=2;
    }
    int en;
    if(n%2==0) {
        en=n;
    }
    else
        en=n-1;
    while(en>=2) {
        arr[i++]=en;
        en=en-2;
    }
}