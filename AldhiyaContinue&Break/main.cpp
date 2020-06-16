#include <iostream>

using namespace std;

int main()
{
    double x,y;
    string z="Program Selesai";
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;

    cout<<"Awal = ";
    cin>>x;
    cout<<"Akhir = ";
    cin>>y;

        a:if(x<=y)
        {
            cout<<x<<endl;
            x++;
            goto a;
        }
        else if(x>y)
        {
            cout<<z<<endl;
        }
    return 0;
}
