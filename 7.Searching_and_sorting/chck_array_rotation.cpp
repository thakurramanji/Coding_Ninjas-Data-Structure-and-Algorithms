#include<climits>
int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int min = INT_MAX;
    int l=0;
    for(int i=0;i<size;i++) {
        if(input[i]<min) {
            min = input[i];
            l=i;
        }
    }
    return l;
}