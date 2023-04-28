int findUnique(int *arr, int size)
{
    //Write your code here
//     int res=0;
//     for(int i=0;i<size;i++) {
//         res = res^ arr[i];
//     }
    
//     return res;
    
    
    int p=0;
    
    for(int i=0;i<size;i++) {
        
        p=1;
        
       //  2 3 1 6 3 6 2
        
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