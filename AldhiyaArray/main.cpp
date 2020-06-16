#include <iostream>

using namespace std;

int main()
{
    int i,j;
    int x[2][4]=
    {
        1,2,3,4,5,6,7,8
    };
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=3;j++)
        {
            cout<<"     "<<x[i][j];
        }
        cout<<""<<endl;
    }
    return 0;
}
