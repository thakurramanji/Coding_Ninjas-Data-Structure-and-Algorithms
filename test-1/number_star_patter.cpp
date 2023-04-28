#include<iostream>
using namespace std;


int main(){

  // Write your code here
    int n;
    cin>>n;
    
    int p=n;

    int star = 0;
    
    while(n > 0) {
        
        int l=1;

        while(l<=n) {
            cout<<l;
            l++;
        }

       
        int st = star;

        while(st>0) {
            cout<<"*";
            st--;
        }

        int tt = n;
        while(tt>0) {
            cout<<tt;
            tt--;
        }
        cout<<endl;
        star= star + 2;
        n--;
    }
}