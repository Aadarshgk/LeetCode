/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *res= (int *)malloc(2*numsSize*sizeof(int)),i=0;
    *returnSize= 2*numsSize;
    while(i<2*numsSize){
        res[i++]=nums[i%numsSize];
        }   
    return res;
}

