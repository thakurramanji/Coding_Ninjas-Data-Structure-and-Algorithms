void swapAlternate(int *arr, int size)
{
    //Write your code here
    int p;
    if (size%2==0)
        p=size-2;
    else
        p=size-3;
    
    for(int i=0;i<=p;i=i+2) {
        int a = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
    }
}