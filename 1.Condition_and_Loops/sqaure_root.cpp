#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    
    int a = 1;
    int res=1;
    while((a*a)<=n) {
       
        a++;
    }
    
    cout<<(a-1)<<endl;
}
