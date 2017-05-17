int nextGreaterElementInArray(int* nums, int numsSize, int value)
{
    int loop;
    int findnext = 0;
    
    for (loop = 0; loop < numsSize; loop++)
    {
        if (nums[loop] == value)
            findnext = 1;
        
        if (findnext && nums[loop] > value)
            return nums[loop];
    }   
    
    return -1;
}

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* findNums, int findNumsSize, int* nums, int numsSize, int* returnSize) {
    *returnSize = findNumsSize;
    int loop;
    
    for (loop = 0; loop < findNumsSize; loop++)
        findNums[loop] = nextGreaterElementInArray(nums, numsSize, findNums[loop]);
    
    return findNums;
}
