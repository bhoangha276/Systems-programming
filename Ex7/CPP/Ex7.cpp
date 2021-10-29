#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int a;
  cout<<"Nhap so nguyen chuyen thanh bit: ";
  cin>>a;
  string binary  ("");
    int mask = 1;
    for(int i = 0; i < 31; i++)
    {
    if((mask&a) >= 1)
        binary = "1"+binary;
    else
        binary = "0"+binary;
     mask<<=1;
 }
 cout<<binary<<endl;
 system("PAUSE");         //optional if not using ideone
 return EXIT_SUCCESS;     //optional if not using ideone
 }