/* my solution  113ms*/
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int index1;
    int index2;
    int expect = 0;
    int *ret = NULL;
    
    for (index1 = 0; index1 < numbersSize; index1++)
    {
        expect = target - numbers[index1];
        for (index2 = index1 + 1; index2 < numbersSize; index2++)
        {
            if ( numbers[index2] == expect)
                goto getret;
            else if (numbers[index2] > expect)
                break;
        }
    }
   
getret:    
    *returnSize = 2;
    ret = (int*)malloc(sizeof(int) * (*returnSize));
    ret[0] = index1 + 1;
    ret[1] = index2 + 1;
    
    return ret;
}

/* simple solution 3ms */

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i=0,j=numbersSize-1;
    if(!numbers)
        return NULL;
    *returnSize = 2;
    int *arr=(int *)malloc(sizeof(int)*2);
    while(i<j){
        if(numbers[i]+numbers[j]>target){
            j--;
        }else if(numbers[i]+numbers[j]<target){
            i++;
        }else{
           arr[0]=i+1;
           arr[1]=j+1;
           break;
        }
    }
    
    return arr;
}
