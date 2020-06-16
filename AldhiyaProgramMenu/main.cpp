#include <iostream>

using namespace std;

void display();
int getchoice();
void com(string,double,int);

const double adult = 40.00,
senior = 30.00,
child = 20.00;
int main()
{
    int choice,month;
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
        if(choice!=4)
        {
            cout<<"Masukkan Banyak Bulan : ";
            cin>>month;
        }
        switch(choice)
        {
            case 1 : com("Dewasa",adult,month);break;
            case 2 : com("Anak",child,month);break;
            case 3 : com("Senior",senior,month);break;
        }
    }
    while (choice!=4);
    return 0;
}
void display()
{
    cout <<"***********************************"<<endl;
    cout <<"* Menu Keanggotaan Klub Kesehatan *"<<endl;
    cout <<"***********************************"<<endl;
    cout <<"* 1. Keanggotaan Dewasa           *"<<endl;
    cout <<"* 2. Keanggotaan Anak             *"<<endl;
    cout <<"* 3. Keanggotaan Senior           *"<<endl;
    cout <<"* 4. Keluar                       *"<<endl;
    cout <<"***********************************"<<endl<<endl;
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
void com(string member, double rate, int month)
{
    cout<<
    endl<<"Type Keanggotaan       : "<<member<<
    endl<<"Bayaran Perbulan       : Rp."<<rate<<".000"<<
    endl<<"Jumlah Bulanan         : "<<month<<
    endl<<"Total                  : Rp."<<(rate*month)<<".000"<<endl<<endl;
}
