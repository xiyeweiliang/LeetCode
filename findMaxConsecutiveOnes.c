/* my splution */
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

/* another solution 1*/
int findMaxConsecutiveOnes(int* nums, int numsSize) {
 int max = 0;
 int sum = 0;
 for (int i=0; i<numsSize; i++)
 {
     sum = (sum+nums[i])*nums[i];
     if(max<sum){max=sum;}
 }
return max;
}

/* another solution 2*/
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int max = 0, i, count = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == 1)
            count++;
        else
            count = 0;
        max = max < count ? count : max;
    }
    return max;
}
