#include<iostream>
using namespace std;

int main() {
	
	char ch;
    cin>>ch;
    
    int value = ch;
    
    if(value>=65 && value<=90)
        cout<<1<<endl;
    else if(value>=97 && value<=122)
        cout<<0<<endl;
    else
        cout<<-1<<endl;
}