#include <stdio.h>
#include <conio.h>
#include <queue>
using namespace std;

void tao_hangdoi_kitu(queue<char> &Q)
{
    char c;
    while(true)
    {
        c=getch();
        printf("%c ",c);
        Q.push(c);
        if(c == 27)
            break;
    }
    if(c == 27)
        printf("THOAT!!");
}

int main( )
{
    queue<char> Q;

    tao_hangdoi_kitu(Q);
    printf("\n");

    while(!Q.empty())
    {
        char c=Q.front();
        printf("%c\n",c);
        Q.pop();
    }
}
