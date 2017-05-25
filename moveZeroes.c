/* my solution */
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

/* another solution */
void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;
    int i;
    // If the current element is not 0, then we need to
    // append it just in front of last non 0 element we found. 
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
    // After we have finished processing new elements,
    // all the non-zero elements are already at beginning of array.
    // We just need to fill remaining array with 0's.
    for (i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}
