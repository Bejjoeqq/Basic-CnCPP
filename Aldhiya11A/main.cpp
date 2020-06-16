#include <iostream>
#include<conio.h>>
#include<iomanip>>
using namespace std;
int main()
{
    int x,y,baris,kolom,m1[10][10],m2[10][10],hasil[10][10];
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    cout <<"=================================="<<endl;
    cout <<"    Operasi Penjumlahan Matrix    "<<endl;
    cout <<"=================================="<<endl;
    do
    {
        cout<<"Jumlah Baris = ";cin>>baris;
        cout<<"Jumlah Kolom = ";cin>>kolom;
    }
    while((baris>10)||(kolom>10));
    cout << "\nMatrix A" << endl;
    for(x=0;x<baris;x++)
        for(y=0;y<kolom;y++)
        {
            cout<<"Data ["<<x<<"."<<y<<"] = ";
            cin>>m1[x][y];
        }
    cout << "\nMatrix B" << endl;
    for(x=0;x<baris;x++)
        for(y=0;y<kolom;y++)
        {
            cout<<"Data ["<<x<<"."<<y<<"] = ";
            cin>>m2[x][y];
        }
    for(x=0;x<baris;x++)
        for(y=0;y<kolom;y++)
            hasil[x][y]=m1[x][y]+m2[x][y];

    cout<<"\nHasilnya...."<<endl;
    cout<<"Matrix A + Matrix B = Matrix C";

    for(x=0;x<baris;x++)
    {
        cout<<'\n';
        for(y=0;y<kolom;y++)
            cout<<setw(4)<<m1[x][y];
            cout<<"      ";

        for(y=0;y<kolom;y++)
            cout<<setw(4)<<m2[x][y];
            cout<<"      ";

        for(y=0;y<kolom;y++)
            cout<<setw(4)<<hasil[x][y];
            cout<<endl;
    }
    return 0;
}
