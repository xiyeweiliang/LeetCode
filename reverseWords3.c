char* reverseWords(char* s) {
    char *pStart = s;
    char *pEnd = NULL;
    char *pSpace = NULL;
    char pTmp;
    
    while ((pSpace = strchr(pStart, ' ')) != NULL)
    {
        pEnd = pSpace - 1;
        while(pStart < pEnd)
        {
            pTmp = *pStart;
            *pStart = *pEnd;
            *pEnd = pTmp;
            pStart++;
            pEnd--;
        }
        pStart = pSpace + 1;
    }
    /* last word */
    pEnd = strchr(pStart, '\0');
    pEnd--;
    while(pStart < pEnd)
    {
        pTmp = *pStart;
        *pStart = *pEnd;
        *pEnd = pTmp;
        pStart++;
        pEnd--;
    }  
    
    return s;
}
