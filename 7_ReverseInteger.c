#include<stdio.h>
#include<stdlib.h>

int reverse(int x){
    unsigned int temp=x;
    if(x<0){
        if(x>INT_MIN){
            temp*=-1;
        }
    }
    printf("%d",temp);
    long int sum=0;
    while(temp>0){
        if(sum*10 <INT_MAX){
            sum=(sum*10)+(temp%10);
        }else{
            return 0;
        }
        temp/=10;
    }
    if(x<0){
        sum=sum*-1;
        return (int)sum;
    }
    return (int)sum;
}