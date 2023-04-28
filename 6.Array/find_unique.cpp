int findUnique(int *arr, int size)
{
    int p=0;
    for(int i=0;i<size;i++) {
        p=1;
        int r = arr[i];
        for(int j=0;j<size;j++) {
            if(j==i)
                continue;
            if(arr[i]==arr[j])
                p=2;
        }
        if(p==1)
            return r;
    }
}