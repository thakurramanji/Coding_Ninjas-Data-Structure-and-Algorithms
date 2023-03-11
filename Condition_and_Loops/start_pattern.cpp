#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n; //this is n
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int space = n-1-i;
        int star = 2*i+1;
        while(space--) {
            cout<<" ";
        }
        while(star--) {
            cout<<"*";
        }
        
        cout<<endl;
    }
  
}


