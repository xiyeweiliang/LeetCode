int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int findContentChildren(int* g, int gSize, int* s, int sSize) {
    int ret = 0;
    int gi = gSize - 1;
    int sj = sSize -1;
    
    qsort (g, gSize, sizeof(int), compare);
    qsort (s, sSize, sizeof(int), compare);
    
    while (gi >= 0 && sj >= 0)
    {
        if (s[sj] >= g[gi])
        {
            ret++;
            sj--;
            gi--;
        }
        else 
        {
            gi--;
        }
    }
    
    return ret;
}
