#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,f,g,h;
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    cout <<"************************************"<<endl;
    cout <<"*    PROGRAM EXPRESI LOGIKA NOR    *"<<endl;
    cout <<"*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl;
    cout <<"* Jika salah satu input    HIGH(1) *"<<endl;
    cout <<"* Maka output akan menjadi  LOW(0) *"<<endl;
    cout <<"*----------------------------------*"<<endl;
    cout <<"*   Jika benar (1) dan salah (0)   *"<<endl;
    cout <<"* (-) D=A+4<10                     *"<<endl;
    cout <<"* (-) E=B>A+5                      *"<<endl;
    cout <<"* (-) F=C-3>=4                     *"<<endl;
    cout <<"************************************"<<endl;
    cout <<"Masukkan Nilai A = ";cin>>a;
    cout <<"Masukkan Nilai B = ";cin>>b;
    cout <<"Masukkan Nilai C = ";cin>>c;

    d=a+4<10;
    e=b>a+5;
    f=c-3>=4;
    g=d||e||f;
    h=!(g);

    cout <<"_________________________Input"<<endl;
    cout <<"Hasil Dari D="<<a;cout<<"+4<10    =   "<<d<<endl;
    cout <<"Hasil Dari E="<<b;cout<<">"<<a;cout<<"+5     =   "<<e<<endl;
    cout <<"Hasil Dari F="<<c;cout<<"-3>=4    =   "<<f<<endl;
    cout <<"_________________________Output"<<endl;
    cout <<"Hasil Dari NOR D E F   =   "<<h<<endl;
    return 0;
}
