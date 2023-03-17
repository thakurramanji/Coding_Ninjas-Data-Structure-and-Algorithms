#include <iostream>
using namespace std;

bool checkPrime(int n) {
    // if(n==2) {
    //     cout<<2<<endl;
    // }
    
    int l=2;
    while(l<n) {
        if(n%l==0)
            return false;
        
        l++;
    }
    
    return true;
}

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    cin>>n;
    
    int p=2;
    while(p<=n) {
        bool result = checkPrime(p);
        if(result) {
            cout<<p<<endl;
        }
        p++;
    }
  
}


