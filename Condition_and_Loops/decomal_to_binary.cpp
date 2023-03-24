#include<iostream>
using namespace std;

int main() {
	int n,k;
    cin>>n;
    long ans=0;
    long pv=1;
    while(n!=0){
        k=n%2;
            
        ans=ans + k*pv;
        n=n/2;
        pv=pv*10;
        }
    cout<<ans<<endl;
}