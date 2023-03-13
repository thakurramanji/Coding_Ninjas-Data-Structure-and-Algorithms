#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    char c = 65;
    for(int i=0;i<n;i++) {
        char c = 65+i;
        int k = i+1;
        while(k--) {
            cout<<c;
            c=c+1;
        }
        cout<<endl;
    }
}


