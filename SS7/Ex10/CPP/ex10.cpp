#include<iostream>
using namespace std;

void SoNguyenRandom(int n, int r[]);
int TimMinSoNguyen(int n, int r[]);

int main(){
    int r[1000];
    SoNguyenRandom(1000, r);
    int result = TimMinSoNguyen(1000, r);
    if(result == 0){
        cout<<"\nKhong tim thay so nguyen nho nhat lon hon 2021!";
    }
    else cout<<"\nSo nguyen nho nhat lon hon 2021: "<<result;
}

void SoNguyenRandom(int n, int r[]) {
    srand((int)time(0));
    for(int i = 0; i < n; ++i){
        r[i] = rand();
        cout<<r[i]<<"\t";
    }
}

int TimMinSoNguyen(int n, int r[]) {
    
    int min;
    for(int i = 1; i < n; ++i){
        if(r[i]>2021){
            min = r[i];
            break;
        }
        else min = 0;
    }

    for(int i = 1; i < n; ++i){
        if(r[i] > 2021 && r[i] < min){
            min = r[i];
        }
    }
    return min; 
}