#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char kata[40]="INI BUKAN SPASI CE!!! NGEUE CE!!";
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    cout<<""<<kata<<endl;
    strlwr(kata);
    cout<<"Lower = "<<kata<<endl;

    strupr(kata);
    cout<<"Upper = "<<kata<<endl;
    return 0;
}
