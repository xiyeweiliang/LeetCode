/* my */
bool canConstruct(char* ransomNote, char* magazine) {
    char *tmp;
    char *p = ransomNote;
    
    while (*p != '\0' && (tmp = strchr(magazine, *p)) != NULL)
    {
        p++;
        *tmp = 'a' - 1;
    }
    
    if (*p == '\0')
        return true;
    else 
        return false;
}

/*other*/
bool canConstruct(char* ransomNote, char* magazine) {
    int chs[26] = {0};
    while(*magazine){
        ++chs[*(magazine++) -'a'];
    }
    while(*ransomNote){
        if (--chs[*(ransomNote++) -'a'] < 0) return false;
    }
    return true;
    
}
