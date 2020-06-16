#include <stdio.h>
#include <stdlib.h>
int main()
{
 struct psd
 {
  char kode[5];
  char nama[15];
  int unit;
  float harga;
 };
 struct psd persediaan[100]=
 {
  "M123","Monitor",5,125000,
  "D124","Diskette",10,10
 };
 int i,n=5;
 float total=0;
 clrscr();
 printf("*******************************\n");
 printf("*       SMK TELKOM M-------*\n");
 printf("* Nama      : Aldhiya Rozak   *\n");
 printf("* Kelas     : X RPL           *\n");
 printf("* No Urut   : 02              *\n");
 printf("*******************************\n\n");

 printf("Persediaan perangkat di salsabila komputer\n\n");
 printf("Kode   Nama Perangkat       Unit    Harga      Total\n");
 printf("-----------------------
  printf("%s %-20s %5d %10.2f %10.2f\n", persediaan[i].kode,
  persediaan[i].nama, persediaan[i].unit, persediaan[i].harga,
  persediaan[i].unit*persediaan[i].harga);

  total += persediaan[i].unit*persediaan[i].harga;
 printf("-----------------------------------------------\n");
 }

 printf("\n