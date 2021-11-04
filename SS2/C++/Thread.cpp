#include<stdio.h>
#include<conio.h>
#include<pthread.h>

void *runTask1(void *data){
	char c;
	FILE *file;
	file = fopen("D:\\A_BaiTap\\LapTrinhHeThong\\Exercises\\SS2\\dulieu.txt","w");
	while(1){
		printf("Nhap mot ki tu: ");
		c = getch();
		if(c == '!')
		break;
		printf("\n%c",c);
		fprintf(file,"%c\t",c);
	}
	fclose(file);
}
int main(){
	int status;
	pthread_t task1;
	
	pthread_create(&task1,NULL,runTask1,NULL);
	pthread_join(task1, (void **)&status);
	system("PAUSE");
	return 1;
}