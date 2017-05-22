/* my solution*/
bool detectCapitalUse(char* word) {
    int len = strlen(word);
    int loop = 0;

    if (len >= 2)
    {
        if (word[0] >= 'a' && word[0] <= 'z')
        {
            loop = 1;
            while (loop < len)
            {
                if (word[loop] < 'a' || word[loop] > 'z')
                    return false;
                loop++;    
            }
        }
        else if (word[0] >= 'A' && word[0] <= 'Z')
        {
            if (word[1] >= 'A' && word[1] <= 'Z')
            {
                loop = 2;
                while (loop < len)
                {
                    if (word[loop] < 'A' || word[loop] > 'Z')
                        return false;
                    loop++; 
                }
            }
            else if (word[1] >= 'a' && word[1] <= 'z')
            {
                loop = 2;
                while (loop < len)
                {
                    if (word[loop] < 'a' || word[loop] > 'z')
                        return false;
                    loop++; 
                }                
            }
        }

    }
    
    return true;
}

/* another solution */
bool detectCapitalUse(char* word) {
    bool isFirstCaptial = false, lower = true, upper = true;
    if(*word>='A' && *word<='Z'){
        isFirstCaptial = true;
    }
    ++word;
    while(*word!='\0'){
        if(*word >='A' && *word<='Z'){
            lower = false;
        } else {
            upper = false;
        }
        ++word;
    }
    
    if(isFirstCaptial) {
        if(lower || upper){
            return true;
        } else {
            return false;
        }
    } else if(lower) {
        return true;
    } else {
        return false;
    }
    
}
