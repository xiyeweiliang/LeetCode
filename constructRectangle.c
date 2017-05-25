**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int *result = (int*)malloc( sizeof(int*) * 2);
    int mid = sqrt(area);

    *returnSize = 2;
    for( ; mid > 0; mid-- ){
    	if( (area % mid) == 0){
    		result[0] = area/mid;
    		result[1] = mid;
    		return result;
    	}
    }
    
    return result;
}
