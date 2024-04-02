int minPartitions(char* n) {
    int max=0,len=strlen(n),i=0;
    while(i<len){
        if(max<(n[i]-'0')){
            max=(n[i]-'0');
        }
        i++;
    }
    return max;
}