#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int st,en,gap;
    cin>>st>>en>>gap;
    
    while(st<=en) {
        int cel = (st-32)*5/9 ;
        cout<<st<<" "<<cel<<endl;
        st+= gap;
    }
  
}
