#include <iostream>
#include<conio.h>
#include <fstream>

using namespace std;

void OutputGrap(char c[], int n)
{
	ofstream fo("D:\\A_BaiTap\\LapTrinhHeThong\\Exercises\\SS2\\dulieu.txt");
	if (fo.is_open())
	{
		for (int i = 0; i < n; i++){
			fo << c[i];
		}
			
	}
	fo.close();
}

void InputGrap(char c[], int n)
{
	char value;
	for (int i = 0; i < n; i++) {
		cout<<"\nNhap 1 ky tu, nhap ! de thoat: ";
		c[i] = getch();
		value = c[i];
		if(value == '!')
		break;
		cout<<c[i];
	}

}


int main()
{	
	int n =100;
	char *c = new char[100];
		InputGrap(c, n);
		OutputGrap(c, n);

}

