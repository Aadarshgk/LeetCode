#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target)
{
    int sum = 0;
    int *arr = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        sum = nums[i];
        arr[0] = i;
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((sum + nums[j]) == target)
            {
                arr[1] = j;
                break;
            }
        }
        return arr;
    }
}
void main()
{
    int* nums= (int*)malloc(4*sizeof(int));
    nums[0]=2;
    nums[1]=7;
    nums[2]=11;
    nums[3]=15;
    int* res= twoSum(nums,4,9);

    printf("%d, %d",res[0],res[1]);
}