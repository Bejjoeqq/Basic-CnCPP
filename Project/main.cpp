#include <iostream>

using namespace std;

int main()
{
    const float phi=3.14;
    char nama[50];
    char kelas[10];
    char prodi[20];
    int pilihan;
    float l1,r,v,p1,ll11,t1,l2,s1,s2;
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    cout<<"Program Menu Genap"<<endl;
    cout<<"1. Bio Data"<<endl;
    cout<<"2. Luas Lingkaran"<<endl;
    cout<<"3. Volume Kubus"<<endl;
    cout<<"4. Keliling Persegi Panjang"<<endl;
    cout<<"5. Keluar"<<endl;
    cout<<"Pilih = ";
    cin>>pilihan;
    switch(pilihan)
    {
    case 1 :
        cout<<""<<endl;
        cout<<"Program Bio Data"<<endl;
        cout<<"Isi Nama = ";
        cin>>nama;
        cout<<"Isi Kelas = ";
        cin>>kelas;
        cout<<"Isi Prodi = ";
        cin>>prodi;
        cout<<""<<endl;
        cout<<"Nama = "<<nama<<endl;
        cout<<"Kelas = "<<kelas<<endl;
        cout<<"Prodi = "<<prodi<<endl;
        break;
    case 2 :
        cout<<""<<endl;
        cout<<"Luas Lingkaran"<<endl;
        cout<<"Jari-jari = ";
        cin>>r;
        l1=phi*r*r;
        cout<<""<<endl;
        cout<<"Luas = "<<l1;
        break;
    case 3 :
        cout<<""<<endl;
        cout<<"Volume Kubus"<<endl;
        cout<<"Panjang = ";
        cin>>p1;
        cout<<"Lebar = ";
        cin>>ll11;
        cout<<"Tinggi = ";
        cin>>t1;
        v=p1*ll11*t1;
        cout<<""<<endl;
        cout<<"Volume = "<<v;
        break;
    case 4 :
        cout<<""<<endl;
        cout<<"Keliling Persegi Panjang"<<endl;
        cout<<"Sisi Sejajar Pertama = ";
        cin>>s1;
        cout<<"Sisi Sejajar Kedua = ";
        cin>>s2;
        l2=s1+s1+s2+s2;
        cout<<""<<endl;
        cout<<"Luas = "<<l2;
        break;
    case 5:
        cout<<"Keluar";
        break;
    default:
        cout<<"Salah Pilihan";
        break;
    }

    return 0;
}
