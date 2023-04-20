#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int number = 0;
    while(n>0) {
        int rem = n%10;
        number = number*10 + rem;
        n=n/10;
    }
    
    cout<<number<<endl;
	
}
