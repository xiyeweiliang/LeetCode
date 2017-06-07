int maxSubArray(int* nums, int numsSize) {
    int i;
    if (numsSize == 0)  
        return 0;  
      
    int max_ending_here = nums[0];  
    int max_so_far = nums[0];  
    for(i = 1; i < numsSize; ++i)  
    {  
        if (max_ending_here < 0)  
            max_ending_here = nums[i];  
        else  
            max_ending_here += nums[i];  
        
        if (max_ending_here > max_so_far)      
            max_so_far = max_ending_here;  
    }  
    return max_so_far;    
}
