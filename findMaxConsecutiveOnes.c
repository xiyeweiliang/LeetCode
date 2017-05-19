int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int loop = 0;
    int max = 0;
    int tmp = 0;

    while (loop < numsSize)
    {
        while (!nums[loop] && loop < numsSize)   
            loop++;
            
        tmp = 0;    
        while (nums[loop] && loop < numsSize)
        {
            tmp++;
            loop++;
        }
        if (tmp > max)
            max = tmp;    
    }
        
    return max;            
}
