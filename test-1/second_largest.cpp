#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int largest = INT_MIN; 
    
    int secondLargest = INT_MIN;          
    int a;
    while( n > 0) {
        
        cin>>a;  
        
        if(a > largest) {
            secondLargest = largest;  
            largest = a; // 9
        }
        else if(a > secondLargest && a != largest) {
            secondLargest = a;
        }
        
        n--;  
    }
    
    cout<<secondLargest;
    
    
  
}


