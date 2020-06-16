#include <iostream>

using namespace std;
void display();
int getchoice();
void vkubus()
{
    double s,v;
    cout<<"Nilai Sisi = ";
    cin>>s;
    v=s*s*s;
    cout<<"Volume Kubus Adalah = "<<v<<endl<<endl;
}
void lsegitiga()
{
    double alas,tinggi,luas;
    cout<<"Nilai Alas = ";
    cin>>alas;
    cout<<"Nilai Tinggi = ";
    cin>>tinggi;
    luas =(tinggi*alas)/2;
    cout<<"Luas Segitiga Adalah = "<<luas<<endl<<endl;
}
void vbola()
{
    double v,r;
    cout<<"Nilai Jari-Jari = ";
    cin>>r;
    v = (4*3.14*r*r*r)/3;
    cout<<"Volume Bola Adalah = "<<v<<endl<<endl;
}
int main()
{
    int choice;
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    do
    {
        display();
        choice = getchoice();
        switch(choice)
        {
            case 1 : vkubus();break;
            case 2 : lsegitiga();break;
            case 3 : vbola();break;
        }
    }
    while (choice!=4);
    return 0;
    vkubus();
    lsegitiga();
    vbola();
    return 0;
}
void display()
{
    cout <<"***********************************************************"<<endl;
    cout <<"* Program Mencari Perhitungan Bangun Ruang & Bangun Datar *"<<endl;
    cout <<"***********************************************************"<<endl;
    cout <<"* 1. Volume Kubus                                         *"<<endl;
    cout <<"* 2. Luas Segitiga                                        *"<<endl;
    cout <<"* 3. Volume Bola                                          *"<<endl;
    cout <<"* 4. Keluar                                               *"<<endl;
    cout <<"***********************************************************"<<endl;
    cout <<"Tentukam Pilihan Anda : ";
}

int getchoice()
{
    int choice;
    cin>>choice;
    while(choice<1||choice>4)
    {
        cout <<"Pilihan hanya no.1-4. coba lagi, tekan enter";
        cin>>choice;
    }
    return choice;
}
