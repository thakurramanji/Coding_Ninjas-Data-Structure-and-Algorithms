#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
    cin>>n;
    
    int a = 1;
    //int p = n/2;
    int res=1;
    while((a*a)<=n) {
       
        a++;
    }
    
    cout<<(a-1)<<endl;
}
