#include <iostream>

using namespace std;

int fpb(int a,int b)
{
    int hasil;
    int r=a%b;
    if(r==0)
    {
        hasil=b;
    }
    else
    {
        while(r!=0)
        {
            a=b;
            b=r;
            r=a%b;
            hasil=b;
        }
    }
    return (hasil);
}
int main()
{
    int m,n;
    cout <<"    ****************************    "<<endl;
    cout <<"    *     SMK TELKOM MEDAN     *    "<<endl;
    cout <<"    *--------------------------*    "<<endl;
    cout <<"    * Nama    : Aldhiya Rozak  *    "<<endl;
    cout <<"    * kelas   : XI-RPL         *    "<<endl;
    cout <<"    * No Urut : 02             *    "<<endl;
    cout <<"    ****************************    "<<endl;

    do
    {
        cout<<"Input 1 = ";
        cin>>m;
        cout<<"Input 2 = ";
        cin>>n;
    }
    while(m<n);
    {
        cout<<"FPB Adalah "<<fpb(m,n)<<endl;
    }
    return 0;
}
