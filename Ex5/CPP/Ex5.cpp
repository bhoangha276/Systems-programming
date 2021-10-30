#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int r;
    srand((int)time(0));
    for(int i = 0; i < 5; ++i){
        r = rand();
        printf("%d\n", r);
    }    
}