#include<iostream>
using namespace std;

void summ(int n) {
    int sum=0;
    while(n>=0) {
        sum+= n;
        n--;
    }
    cout<<sum<<endl;
}

void product(int n) {
    long result = 1;
    int i=1;
    while(i<=n) {
        result*=i;
        i++;
    }
    
    cout<<result<<endl;
}

int main() {
	// Write your code here
    int n,c;
    cin>>n>>c;
    
    if(c==1)
        summ(n);
    else if(c==2)
        product(n);
    else
        cout<<"-1"<<endl;
	
}
