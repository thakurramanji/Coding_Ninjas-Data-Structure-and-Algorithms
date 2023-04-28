void printTable(int st, int en, int gap) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    
    while(st<=en) {
        int cel = (st-32)*5/9 ;
        cout<<st<<" "<<cel<<endl;
        st+= gap;
    }
    
}


