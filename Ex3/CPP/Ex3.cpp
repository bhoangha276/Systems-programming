#include <iostream> 
#include <windows.h> // WinApi header 

using namespace std;

int main() 
{ 
    Beep(523,500); // 523 hertz (C5) for 500 milliseconds     
    cin.get(); // wait 
    return 0; 
}