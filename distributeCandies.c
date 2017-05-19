int distributeCandies(int* candies, int candiesSize) {
    int loop = 0;
    int eachSize = candiesSize / 2;
    int candiesBit[200001] = {0};
    int kinds = 0;
    
    if (candiesSize == 0)
        return 0;
        
    while (loop < candiesSize)
    {
        if (!candiesBit[candies[loop] + 100000])
        {
            candiesBit[candies[loop] + 100000] = 1;
            kinds++;
            if (kinds >= eachSize)
            break;
        }
        loop++;
    }
    return kinds;
}
