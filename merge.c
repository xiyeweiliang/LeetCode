void merge(int* nums1, int m, int* nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int base = m + n -1;
    
    while ((base >= 0) && i >= 0  && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[base--] = nums1[i--];
        else 
            nums1[base--] = nums2[j--];
    }
    if (j < 0)
        return;
        
    if (i < 0)
    {
        memcpy(nums1, nums2, (j + 1)*sizeof(int));
        return;
    }
}
