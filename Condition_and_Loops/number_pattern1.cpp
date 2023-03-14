#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int k=i+1;
        int m=i+1;
        while(k--) {
            cout<<m;
            m++;
        }
        cout<<endl;
    }
}