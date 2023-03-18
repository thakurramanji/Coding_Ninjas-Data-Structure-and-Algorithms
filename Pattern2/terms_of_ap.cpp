#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;
    cin>>n;
    
    int x=1;
    int l=1;
    while(l<=n) {
        int p = 3*x+2;
        if(p%4 != 0) {
            cout<<p<<" ";
            l++;
        }
        x++;
    }
	
}
