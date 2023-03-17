#include <iostream>
using namespace std;

int main() {
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++) {
        int space = n-i-1;
        while(space--) {
            cout<<" ";
        }
        int k = i+1;
        int rev = k-1;
        
        int print = i+1;
        while(k--) {
            cout<<print;
            print++;
        }
        int rePrint = print-2;
        
        while(rev--) {
            cout<<rePrint;
            rePrint--;
        }
        
        cout<<endl;
    }
    
}
