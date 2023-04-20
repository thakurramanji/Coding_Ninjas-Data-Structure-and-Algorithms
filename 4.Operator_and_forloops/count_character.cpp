#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    char c;
    c=cin.get();
    
    int cha = 0;
    int num = 0;
    int els = 0;
    while(c != '$') {
       
        if((c>=65 && c<=90) || (c>=97 && c<=122))
            cha++;
        else if(c>=48 && c<=57)
            num++;
        else
            els++;
        
         c=cin.get();
    }
    
    cout<<cha<<" "<<num<<" "<<els<<endl;
    
  
}


