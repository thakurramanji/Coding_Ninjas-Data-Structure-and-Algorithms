#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++) {
        int space = n-i;
        while(space--) {
            cout<<" ";
        }
        int d = i;
        int likho = i;
        while(d--) {
            cout<<likho;
            likho--;
        }
        
        int rev = i-1;
        int printt= 2;
        while(rev--) {
            cout<<printt;
            printt++;
        }
        cout<<endl;
    }
}