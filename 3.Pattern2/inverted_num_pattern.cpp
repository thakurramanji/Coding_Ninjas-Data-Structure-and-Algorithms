#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    
    for(int i=n;i>=1;i--) { 
        int p=i;
        while(p--) {
            cout<<i;
        }
        cout<<endl;
    }
  
}


