#include<iostream>
#include<conio.h>
#include <ctime>
#include <cstdlib>
#include<windows.h>
#include <math.h>
using namespace std;
void hexa(){
	char a;
	int c;
	char f;
	int d;
	while(true)
	{
        cout<<"Chuyen ma hex(ESC de thoat):"<<endl;
		a=getch();
		if(a==27)
		{
			break;
		}	
		cout<<a<<" => ";
		int c;
		c = (int)a/16;
		f = (int)a%16;
		d = (int)a%16;
		switch(f)
		{
			case 10:
				f='A';
				break;
			case 11:
				f='B';
				break;
			case 12:
				f='C';
				break;
			case 13:
				f='D';
				break;
			case 14:
				f='E';
				break;
			case 15:
				f='F';
				break;
		}
		if(f>=10)
			cout<<c<<f<<endl;
		else if(d<10)
			cout<<c<<d<<endl;
		cout<<hex;
	}	
}


int main()
{
	hexa();

}


// #include <stdio.h>
// #include <string.h>

// #include<iostream>
// #include<conio.h>

// using namespace std;
// int main(void){
//     char Word[17], outword[33];//17:16+1, 33:16*2+1
//     int i, len;

//     char key_press;
//     int value;
//     while(true)
//     {
//         printf("Intro Word:");
//         fgets(Word, sizeof(Word), stdin);
//         len = strlen(Word);
//         if(Word[len-1]=='\n')
//             Word[--len] = '\0';

//         for(i = 0; i<len; i++){
//         sprintf(outword+i*2, "%02X", Word[i]);
//         }
//         printf("%s\n", outword);

//         key_press = getch();
//         value = key_press;
//         if (value == 27) // For ESC
//             break;
//     }
//     return 0;
// }

///loi