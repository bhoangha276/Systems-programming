#include <iostream>
#include <cstdlib>
using namespace std;

float GetRandom(float min,float max){
    return min + (float)(rand()*(max-min)/(RAND_MAX));
}

int main(){
    float min = 0, max = 1;

    for (int i = 0;i < 20;i++) {
        cout << GetRandom(min,max)<<endl;
    }
    
    return 0;
}
