
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//#include<verctors>
void reverseStringWordWise(char input[]) {
    // Write your code here
    
    vector <string> words;
    string word="";
    
    int size=strlen(input);
    for(int i=0;i<=size;i++){
        
        if(input[i]!=' ' && input[i]!='\0')
            word+=input[i];
        else{
            words.push_back(word);
            word="";
        }
    }
    
    reverse(words.begin(),words.end());
    
    string ans="";
    for(int i=0;i<words.size();i++){
        if(i!=words.size()-1)
            ans+=words[i]+" ";
        else
            ans+=words[i];
    }
    
    strcpy(input,ans.c_str());
    
    
    
    
    
    
    
//     int n = strlen(str);
    
//     int l=0, r=n-1;
    
//     while(l < r) {
//         char b = str[l];
//         str[l]=str[r];
//         str[r]=b;
//         l++;
//         r--;
//     }
    
//     int i=0, j=0;
    
//     for(int k=0;k<n;k++) {
//         if(str[k]==' ' || k== n-1) {
//             if(k== n-1) {
//                 j=k;
//             }
//             else
//             j=k-1;
            
//             while(i<=j) {
//                 int c = str[i];
//                 str[i]=str[j];
//                 str[j]=c;
//                 i++;
//                 j--;
//             }
            
//             i=k+1;
//         }
//     }
}