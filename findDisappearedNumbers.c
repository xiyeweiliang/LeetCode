#include <math.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int tmp;
    int loop = 0;
    int *returnArray = NULL;
    
    while (loop < numsSize)
    {
        tmp = abs(nums[loop])-1;
        if(nums[tmp]>0) nums[tmp]=-nums[tmp]; 
        loop++;
    }
    
    loop = 0;
    *returnSize = 0;
    while (loop < numsSize)
    {
        if (nums[loop++] > 0)
            *returnSize += 1;
    }  
    returnArray = (int *)malloc((*returnSize) * sizeof(int));
    tmp = 0;
    loop = 0;
    while (loop < numsSize)
    {
        if (nums[loop] > 0)
            returnArray[tmp++] = loop + 1;
        loop++;
    }     
    assert(tmp == *returnSize);           
    
    return returnArray;
}
