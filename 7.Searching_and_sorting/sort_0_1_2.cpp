void sort012(int *arr, int n)
{
    //Write your code here
    // int i,j;
    // for(i=0;i<n-1;i++) {
    //     for(j=0;j<n-1-i;j++) {
    //         if(arr[j]>arr[j+1]) {
    //             int t = arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=t;
    //         }
    //     }
    // }
    
    int l=0;
    int r=n-1;
    int mid=0;
    
    while(mid<=r) {
        switch(arr[mid]) {
            case 0:
                {
                    int t=arr[l];
                    arr[l]=arr[mid];
                    arr[mid]=t;
                    l++;
                    mid++;
                    break;
                }
            case 1:
                {
                    mid++;
                    break;
                }
            case 2:
                {
                    int t=arr[mid];
                    arr[mid]=arr[r];
                    arr[r]=t;
                    r--;
                    break;
                }
        }
    }
}