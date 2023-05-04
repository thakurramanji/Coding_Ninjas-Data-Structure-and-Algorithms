void pushZeroesEnd(int *arr, int n)
{
    //Write your code here
    // int l=0;
    // int r=size-1;
    // int p= size;
    // while(input[r] !=0 && p>=0) {
    //     r--;
    //     p--;
    // }
    // while(l<=r) {
    //     if(input[l]==0) {
    //         int t=input[l];
    //         input[l]=input[r];
    //         input[r]=t;
    //         l++;
    //         r--;
    //     }
    // }
    
    int l=0;
	    for(int i=0;i<n;i++) {
	        if(arr[i] != 0) {
	            arr[l++]=arr[i];
	        }
	    }
	    
	    while(l<n) {
	        arr[l++]=0;
	    }
}