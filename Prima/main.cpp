#include <iostream>

using namespace std;

int main()
{
    int x,s,d,j;
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;
    cout<<"Awal = ";
    cin>>s;
    cout<<"Akhir = ";
    cin>>d;
    for(x=s;x>=d;x--)
    {
        for(j=2;j<x;j++)
        {
            if(x%j<1)break;

            else if(x==j+1)
            {
                cout<<x<<endl;
            }
        }
    }
    return 0;
}
