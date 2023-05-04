int findSecondLargest(int *input, int n)
{
    //Write your code here
    int largest = -2147483648;
    for(int i=0;i<n;i++) {
        if(input[i]>largest)
            largest = input[i];
    }
    
    int res = -2147483648;
    int l=0;
    for(int i=0;i<n;i++) {
        if(input[i]>res && input[i] != largest){
            res = input[i];
            l++;
        }
    }
    
    return res;
}