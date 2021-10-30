#include <stdio.h>
#include <string.h>

#include<iostream>
#include<conio.h>

using namespace std;
int main(void){
    char Word[17], outword[33];//17:16+1, 33:16*2+1
    int i, len;

    char key_press;
    int value;
    while(true)
    {
        printf("Intro Word:");
        fgets(Word, sizeof(Word), stdin);
        len = strlen(Word);
        if(Word[len-1]=='\n')
            Word[--len] = '\0';

        for(i = 0; i<len; i++){
        sprintf(outword+i*2, "%02X", Word[i]);
        }
        printf("%s\n", outword);

        key_press = getch();
        value = key_press;
        if (value == 27) // For ESC
            break;
    }
    return 0;
}

///loi