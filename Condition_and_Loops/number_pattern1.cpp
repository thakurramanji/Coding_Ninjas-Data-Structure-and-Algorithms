#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int k=i+1;
        int m=i+1;
        while(k--) {
            cout<<m;
            m++;
        }
        cout<<endl;
    }
  
}


