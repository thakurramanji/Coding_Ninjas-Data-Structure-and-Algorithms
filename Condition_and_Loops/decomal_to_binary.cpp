// #include<iostream>
// using namespace std;

// int main() {
// 	// Write your code here
// 	int n;
//     cin>>n;
    
//     long res=0;
//     for(int i=31;i>=0;i--) {
//         int k = n>>i;
//         if(k&1)
//             res=res*10 +1;
//         else
//             res=res*10 +0;
//     }
    
//     cout<<res<<endl;
// }


#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,k;
    cin>>n;
    long ans=0;
    long pv=1;
        
        while(n!=0){
            k=n%2;
            
            ans=ans + k*pv;
            n=n/2;
            pv=pv*10;
            }
           
        
    cout<<ans<<endl;
}

