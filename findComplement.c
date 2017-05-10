int findComplement(int num) {
    int tmp = num;
    int ret = 0;
    int index = 0;
    
    while (tmp)
    {
        if (!(tmp & 0x1))
            ret |= (0x1 << index);
        
        tmp >>= 1;    
        index++;
    }
    
    return ret;
}
