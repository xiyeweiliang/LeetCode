int addDigits(int num) {
    int tmp;
    
    while(num / 10)
    {
        tmp = num % 10;
        while((num = num / 10) != 0)
            tmp += num % 10;
        num = tmp;
    }
    
    return num;
}
