

#include<map>
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    if(size1 == 0 || size2 == 0)
        return;
    
    map<int,int> mapobj;
    for(int i=0;i<size2;i++)
    {
        int key=input2[i];
        if(mapobj.count(key)==0)
            mapobj[key]=1;
        else
            mapobj[key]++;
    }
    
    for(int i=0;i<size1;i++)
    {
     if(mapobj[input1[i]]>0)
      {
         cout<<input1[i]<<" ";
         mapobj[input1[i]]--;
      }
    }
    //cout<<endl;
    
}