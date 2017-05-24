char findTheDifference(char* s, char* t) {
    char *p = t;
    char *ps = NULL;
    while(*p != '\0')
    {
        if ((ps = strchr(s, *p)) != NULL)
            *ps = 'A';
        else
            break;
        p++;
    }
    
    return *p;
}
