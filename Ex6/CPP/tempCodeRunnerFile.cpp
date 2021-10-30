    int i, len;

        printf("Intro Word:");
        fgets(Word, sizeof(Word), stdin);
        len = strlen(Word);
        if(Word[len-1]=='\n')
            Word[--len] = '\0';

        for(i = 0; i<len; i++){
            sprintf(outword+i*2, "%02X", Word[i]);
        }
        printf("