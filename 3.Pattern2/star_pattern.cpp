#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        int k = i;
        int space = n-i;
        while(space--) {
            cout<<" ";
        }
        int star = 2*i-1;
        while(star--) {
            cout<<"*";
        }
        cout<<endl;
    }
  
}


