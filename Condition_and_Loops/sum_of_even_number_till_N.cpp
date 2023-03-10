#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int d =0;
    int sum=0;
    while(d<=n) {
        sum+= d;
        d=d+2;
    }
    
    cout<<sum<<endl;
  
}