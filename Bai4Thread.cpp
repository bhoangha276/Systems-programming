#include <iostream>
#include <pthread.h>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <ctime> 
using namespace std;
#define COUNT 100

void * Thr1(void *data)
{
	int n ;
	do{
		cout<<"Nhap n:";
		cin>>n;
	}
	while(n>10);
	int *a  = (int*)data;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap gt mang a:";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
void * Thr2(void *data)
{
	srand(time(NULL));
	int m = rand() % 10 + 1;
	int *b = (int*)data;
	cout<<m<<endl;
	for(int i=0;i<m;i++)
	{
		b[i] = rand() % 100 + 1;
	}
	for(int i=0;i<m;i++)
	{
		cout<<b[i]<<"\t";
	}
}
int main(int argc, char *argv[])
{
	int a[10];
	int b[10];
    int status;
    pthread_t task1;
    pthread_t task2;
    pthread_create(&task1,NULL,Thr1,&a);
    pthread_join(task1, (void **)&status);
    pthread_create(&task2,NULL,Thr2,&b);
    pthread_join(task2, (void **)&status);
    system("PAUSE");
    return 1;
}
