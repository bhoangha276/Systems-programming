#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

template <class T>
string to_string(T t, ios_base & (*f)(ios_base&))
{
  ostringstream oss;
  oss << f << t;
  return oss.str();
}

int main ()
{
    int number;
    cout<<"Nhap so nguyen chuyen sang Hex: ";
    cin>>number;
    cout<<to_string<long>(number, hex)<<endl;
    system("PAUSE");
    return 0;
}