#include<iostream>
#include<pthread.h>
#include <conio.h>
#include <queue>
using namespace std;

void * Thread_1(void *data)
{
    queue<char> *Q = (queue<char>*)data;
    char c;
    while(true)
    {
        cin >>c;
        printf("%c ",c);
        if(c !=27)
        {
            Q->push(c);
        }
        if(c == 27)
            break;
    }
    if(c == 27)
        printf("\nTHOAT!!\n");
}
void * Thread_2(void *data)
{
    queue<char> *Q = (queue<char>*)data;
    while(!Q->empty())
    {
        char c=Q->front();
        printf("%c\n",c);
        Q->pop();
    }
    printf("\nDUNG THREAD 2\n");
    pthread_exit(0);
}
int main(){
    queue<char> Q;
    pthread_t Thr1,Thr2;
    pthread_create(&Thr1,NULL,Thread_1,&Q);
    pthread_join(Thr1,NULL);
    pthread_create(&Thr2,NULL,Thread_2,&Q);
    pthread_join(Thr2,NULL);
    system("PAUSE");
    return 0;
}
