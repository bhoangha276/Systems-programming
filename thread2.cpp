#include <iostream>
#include <pthread.h>
#include <ctime>
#include <cstdlib>
using namespace std;

void * runTask1(void *data){
	int n;
	do{
		cout<<"\nNhap n (task1):";
		cin>>n;	
	}while(n>10);
	cout<<"\n\t(t1) : "<<n<<endl;
	if(n<=0){
		cout<<"\nThread 1 stop!";
		return NULL;
	}
	int *arr = (int *)data;
	for(int i = 0; i < n; i++){
		cout<<"arr1["<<i<<"] : ";
		cin>>arr[i];
	}
	cout<<endl<<"Task1 :";
	for(int i = 0; i < n; i++){
		cout<<"(1)"<<arr[i]<<" , ";
	}
	cout<<"\nTask1 end"<<endl;
	return NULL;
}
void * runTask2(void *data){
	int m;
	srand(time(0));
	m = rand()%100;
	cout<<"\n\t(t2) : "<<m<<endl;
	if(m<=0){
		cout<<"\nThread 2 stop!";
		return NULL;
	}
	int *arr = (int *)data;
	for(int i = 0; i < m; i++){
		arr[i] = rand()%1000;
	}
	cout<<endl<<"Task2 :";
	for(int i = 0; i < m; i++){
		cout<<"(2)"<<arr[i]<<" , ";
	}
	cout<<"\nTask2 end"<<endl;
	return NULL;
}


int main(){
	int arr1[10] ;
	int arr2[10] ;
	
	
	pthread_t task1, task2;
	
	pthread_create(&task1, NULL, runTask1, &arr1);
	pthread_create(&task2, NULL, runTask2, &arr2);
	pthread_join(task1, NULL);
	pthread_join(task2, NULL);

	return 0;
}

