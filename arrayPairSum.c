void sortNums(int s[], int l, int r)  
{  
    int i, j, x;  
    if (l < r)  
    {  
        i = l;  
        j = r;  
        x = s[i];  
        while (i < j)  
        {  
            while(i < j && s[j] > x)   
                j--; /* 从右向左找第一个小于x的数 */  
            if(i < j)   
                s[i++] = s[j];  
  
            while(i < j && s[i] < x)   
                i++; /* 从左向右找第一个大于x的数 */  
            if(i < j)   
                s[j--] = s[i];  
        }  
        s[i] = x;  
        sortNums(s, l, i-1); /* 递归调用 */  
        sortNums(s, i+1, r);  
    } 
    
    return;
}  

int arrayPairSum(int* nums, int numsSize) {
    int s,e;
    int ret = 0;
    
    s = 0;
    e = numsSize - 1;
    
    sortNums(nums, s, e);
    
    for (; s < numsSize; s += 2)
        ret += nums[s];
    
    return ret;
}
