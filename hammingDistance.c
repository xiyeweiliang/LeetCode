int hammingDistance(int x, int y) {
    int bitcount = 0; 
    int loop = 0;
    
    if (x == y)
        return 0;
    
    for (loop = 0; loop < 32; loop++)
    {
        if ((x & (0x01 << loop)) != (y & (0x01 << loop)))
        {
            bitcount++;
        }
    }
    
    return bitcount;
}
