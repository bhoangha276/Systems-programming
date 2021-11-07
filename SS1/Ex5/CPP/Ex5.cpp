// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
 
// int main(){
//     int r;
//     srand((int)time(0));
//     for(int i = 0; i < 5; ++i){
//         r = rand();
//         printf("%d\n", r);
//     }    
// }

#include<iostream>
#include<conio.h>
#include <ctime>
#include <cstdlib>
#include<windows.h>
#include <math.h>
using namespace std;
void maxRand(int a[],int n){
	for(;;)
	{
		int r2 = static_cast <int> (rand()) / (static_cast <int> (RAND_MAX/1000));
		cout<<r2<<endl;
		for(int i = 0 ;i<n ;i++){
			if(a[0] == 0)
			{
				a[0]=a[1];
				n--;
			}
			a[n]=r2;
		}
		n=n+1;
		int tg;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
			{
				if(a[i] < a[j]){
	                tg = a[i];
	                a[i] = a[j];
	                a[j] = tg;        
	            }
			}	
		}
		cout<<"3 So Lon Nhat: "<<a[0]<<","<<a[1]<<","<<a[2];	
		cout<<endl;
		cout<<endl;
		Sleep(1000);
	}
}

int main()
{
	int a[10000];
	maxRand(a,1);
}
