#include<iostream>
using namespace std;
void NhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout<<endl;
}

void XuatBaPTuMang(int a[], int n) {
        cout << a[0] << ", " << a[1] << ", " << a[2] << " ";
        cout<<endl;
}

void SXMangTang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                // If arr[i] > arr[j], swap the value of arr[i] and arr[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void SXMangGiam(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                // If arr[i] > arr[j], swap the value of arr[i] and arr[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    int a[1000], n;
    cout << "Nhap n: ";
    cin >> n;
    NhapMang(a, n);
    cout << "Xuat mang: ";
    XuatMang(a, n);

    //a.
    SXMangTang(a, n);
    cout << "Sap xep mang tang dan: ";
    XuatMang(a, n);
    XuatBaPTuMang(a, n);

    //b.
    SXMangGiam(a, n);
    cout << "Sap xep mang giam dan: ";
    XuatMang(a, n);
    XuatBaPTuMang(a, n);

    system("pause");
    return 0;
}
