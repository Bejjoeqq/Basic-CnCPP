/*Program ini digunakan untuk menghitung nilai faktorial*/

#include<stdio.h>
main()
{
   int N,I;
   long int Faktorial=1;
   clrscr();

   printf("Masukkan nilai faktorial=");
   scanf("%I",&N);

   for(I=2;I<=N;I++)Faktorial=Faktorial*I;
   printf("%I faktorial=%Id",N,Faktorial);

  }
