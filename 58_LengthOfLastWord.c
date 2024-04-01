#include<stdio.h>
#include<stdlib.h>

int lengthOfLastWord(char* s) {
    int i=strlen(s)-1,count=0,flag=0;
    while(i>-1){
        if(s[i]!=' '){
            flag=1;
            count++;
        }
        if(s[i]==' ' && flag==1){
            break;
        }
        i--;
    }
    return count;
}