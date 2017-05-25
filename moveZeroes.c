void moveZeroes(int* nums, int numsSize) {
    int value = 0;
    int zero = 0;
    
    while (zero < numsSize && value < numsSize)
    {
        while (nums[zero] != 0)
            zero++;
            
        value = zero + 1;
        while (nums[value] == 0)
            value++;
      
        if (zero < value && value < numsSize)
        {
            nums[zero] = nums[value];
            nums[value] = 0;
        }
        else
            break;
    }
    
    return;
}
