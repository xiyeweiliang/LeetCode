int getSum(int a, int b) {
    int ret;
    
    if (a == 0)
    return b;
    
    if (b == 0)
    return a;
    
    while (b != 0)
    {  
        ret = a ^ b;
        b = (a & b) << 1;
        a = ret;
    }

    return ret;
}
