#include <iostream>

using namespace std;

int main()
{
    int x,y;
    double mint = 1;
    double sec = 59;
    double ms = 10;
    cout<<"Awal = ";
    cin>>x;
    cout<<"Akhir = ";
    cin>>y;

    do
    {

        cout<<mint<<":"<<sec<<":"<<ms;
        if (mint == 0 && sec == 0 && ms == 0)
            {
                ms = 0;
            }
            else if (sec == 0 && ms == 0)
            {
                mint = 0;
                sec = 59;
                ms = 10;
            }
            else if (ms == 0)
            {
                ms = 10;
                sec--;
            }
            x--;
    }
    while(x>=y);
    return 0;
}
