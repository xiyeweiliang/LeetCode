#include <stdlib.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **ret = NULL;
    int loop;
    int minus3, minus5;
    char *pStr = NULL;
    
    pStr = (char *)malloc(sizeof(char) * n * 10);
    ret = (char **)malloc(sizeof(char*) * n);
    if (pStr != NULL && ret != NULL)
    {
        for (loop = 1; loop <= n; loop++)
        {
            minus3 = loop % 3;
            minus5 = loop % 5;
            if (!minus3)
            {
                if(!minus5)
                {
                    memcpy(pStr + (loop -1) * 10, "FizzBuzz", 9);
                }
                else
                {
                    memcpy(pStr + (loop -1) * 10, "Fizz", 5);
                }
            }
            else if(!minus5)
            {
                memcpy(pStr + (loop -1) * 10, "Buzz", 5);
            }
            else
            {
                sprintf(pStr + (loop -1) * 10, "%d", loop);
            }
            ret[loop -1] = pStr + (loop -1) * 10;
        }
    }
    *returnSize = n;
    
    return ret;
}
