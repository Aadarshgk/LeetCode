#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    unsigned int temp=x,sum=0;
    while(temp!=0){
        sum=(sum*10)+(temp%10);
        temp/=10;
    }
    if(sum==x){
        return true;
    }
    return false;
}