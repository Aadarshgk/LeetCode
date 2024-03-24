/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int *res= (int *)malloc(numsSize*sizeof(int)),i=0;
    while(i<numsSize){
        res[i]=nums[nums[i]];
        i++;
    }   
    *returnSize=i;
    return res;
}