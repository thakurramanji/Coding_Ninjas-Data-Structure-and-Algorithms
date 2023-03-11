#include<iostream>
using namespace std;


int main(){
    int st,en,gap;
    cin>>st>>en>>gap;
    while(st<=en) {
        int cel = (st-32)*5/9 ;
        cout<<st<<" "<<cel<<endl;
        st+= gap;
    }
  
}
