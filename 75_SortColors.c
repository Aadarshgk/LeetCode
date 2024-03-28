#include<stdio.h>
#include<stdlib.h>

void sortColors(int* nums, int numsSize) {
    int i=0,min=0,j,temp;
    while(i<numsSize-1){
        j=i+1;
        min=i;
        while(j<numsSize){
            if(nums[j]<nums[min]){
                min=j;
            }
            j++;
        }
        temp=nums[i];
        nums[i]=nums[min];
        nums[min]=temp;
        i++;
    }        
}