#include<iostream>
using namespace std;

int main() {
	// Write your code here
	long n;
    cin>>n;
    int sum1=0;
    int sum2=0;
    
    while(n>0) {
        int rem = n%10;
        if(rem%2==0)
            sum2+=rem;
        else 
            sum1+=rem;
        
        n=n/10;
    }
    
    cout<<sum2<<" "<<sum1<<endl;
}
