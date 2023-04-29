int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int res = 0;
    for(int i=0;i<size-2;i++) {
        for(int j=i+1;j<size-1;j++) {
            for(int k=j+1;k<size;k++) {
                if(input[i] + input[j] + input[k] == x)
                    res++;
            }
        }
    }
    
    return res;
}