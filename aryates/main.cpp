#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char nama[100],alamat[100];
    cout << "Masukkan Nama : ",gets(nama);
    cout << "Masukkan Alamat : ",gets(alamat);
    cout << "Nama saya adalah "<<nama<<" dari kota "<<alamat<< endl;
    return 0;
}
