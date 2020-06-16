#include <stdio.h>
int main()
{
 float h,h1,km,kn,b,d,m;
 char s,a;
 clrscr();
 printf("*******************************\n");
 printf("*       SMK TELKOM MEDAN      *\n");
 printf("*-----------------------------*\n");
 printf("* Nama      : Aldhiya Rozak   *\n");
 printf("* Kelas     : X RPL           *\n");
 printf("* No Urut   : 02              *\n");
 printf("*******************************\n\n");
 printf("Selamat datang bejjoeqq NET\n");
 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
 printf("Daftar harga di bejjoeqq NET\n");
 printf("1. 3000/jam\n");
 printf("2. 2500/jam jika main lebih dari 4 jam\n");
 printf("3. 2000/jam member\n");
 printf("Apakah anda sudah bergabung menjadi member [y/t] = ");
 scanf("%s",&a);
 printf("----------------------------------------------------\n");

 switch(a)
 {
 case 'y':printf("Status member, Rp.2000/jam");
 printf("\n\nBerapa jam anda ingin bermain = ");
 scanf("%f",&km);
 h=km*2000;
 printf("\nharga main %2.0f jam adalah = Rp.%5.2f",km,h);
 printf("\nPembayaran = Rp.");
 scanf("%f",&b);
 d=b-h;
  if(d>=0)
  {
  printf("\nKembalian anda = Rp.%5.2f",d);
  printf("\nTerimakasih sudah bermain");
  }
  else
  {
  m=d*(-1);
  printf("\nUang anda kurang Rp.%5.2f",m);
  }
 break;

 case 't':printf("Status tidak member, Rp.3000/jam jika main >=5 jam Rp.2500/jam");
 printf("\n\nBerapa jam anda ingin bermain = ");
 scanf("%f",&kn);

  if(kn>=5)
  {
  h1=kn*2500;
  printf("\nharga main %2.0f jam adalah = Rp.%5.2f",kn,h1);
  printf("\nPembayaran = Rp.");
  scanf("%f",&b);
  d=b-h1;
   if(d>=0)
   {
   printf("\nKembalian anda = Rp.%5.2f",d);
   printf("\nTerimakasih sudah bermain");
   }
   else
   {
   m=d*(-1);
   printf("\nUang anda kurang Rp.%5.2f",m);
   }
  }
  else
  {
  h1=kn*3000;
  printf("\nharga main %2.0f jam adalah = Rp.%5.2f",kn,h1);
  printf("\nPembayaran = Rp.");
  scanf("%f",&b);
  d=b-h1;
   if(d>=0)
   {
   printf("\nKembalian anda = Rp.%5.2f",d);
   printf("\nTerimakasih sudah bermain");
   }
   else
   {
   m=d*(-1);
   printf("\nUang anda kurang Rp.%5.2f",m);
   }
  }
  break;
 }
 printf("\n\nIngin melanjutakan [y/t] = ");
 scanf("%s",&s);
 if(s=='y'||s=='Y')
 main();
}