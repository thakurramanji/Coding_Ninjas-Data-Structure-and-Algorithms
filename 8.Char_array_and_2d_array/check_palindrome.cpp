bool checkPalindrome(char str[]) {
    // Write your code here
    int n=0;
    for(int i=0; str[i] != '\0';i++) {
        n++;
    }
    //cout<<n<<endl;
    int l=0;
    int r=n-1;
    while(l<=r) {
        if(str[l] != str[r])
            return 0;
        l++;
        r--;
    }
    return 1;
    
}
