char* reverseString(char* s) {
    char *pstart = s;
    char *pend = s + strlen(s) - 1;
    char tmp;
    
    while(pstart < pend)
    {
        tmp = *pstart;
        *pstart = *pend;
        *pend = tmp;
        pstart++;
        pend--;
    }
    
    return s;
}
