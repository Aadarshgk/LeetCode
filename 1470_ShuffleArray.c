

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int *res=(int *)malloc(numsSize*sizeof(int)),i=0,j=0;
    for(i;i<numsSize;i+=2,j++){
        res[i]=nums[j];
        res[i+1]=nums[n+j];
    }
    *returnSize=i;
    return res;
}