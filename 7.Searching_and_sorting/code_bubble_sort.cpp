void bubbleSort(int *input, int size)
{
    //Write your code here
    int i,j;
    for(i=0;i<size-1;i++) {
        for(j=0;j<size-1-i;j++) {
            if(input[j]>input[j+1]) {
                int t = input[j];
                input[j]=input[j+1];
                input[j+1]=t;
            }
        }
    }
    
}