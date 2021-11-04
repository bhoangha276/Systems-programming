#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char key_press;
    int value;
    
    while (true)
    {
    	cout << "Nhap phim bat ky (An ESC de thoat): ";
        key_press = getch();
        value = key_press;
        if (value == 27) // For ESC
            break;
        cout << key_press <<endl;
    }
    return 0;
}
