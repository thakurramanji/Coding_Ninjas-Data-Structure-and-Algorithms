#include<iostream>
using namespace std;

void powerr(int x, int n) {
    if(n==0)
    {
        cout<<1<<endl;
        return ;
    }
    
    int value = 1;
    while(n>0) {
        value=value*x;
        n--;
    }
    
    cout<<value<<endl;
}

int main() {
	// Write your code here
	int x,n;
    cin>>x>>n;
    
    powerr(x,n);
}
