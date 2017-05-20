int singleNumber(int* nums, int numsSize) {
    int result = 0 ;
    int i=0;
    while ( i<numsSize)  
        result ^= nums[i++];  
    
    return result;  
}
