int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int left = 0;
    int right = n-1;
    
    while(left<=right) {
        int mid = (left+right)/2;
        
        if(input[mid]==val)
            return mid;
        
        if(input[mid]>val) {
            right = mid-1;
        }
        else 
            left = mid+1;
    }
    
    return -1;
    
}