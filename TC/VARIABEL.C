/* Deklatasi Variabel */
#include <stdio.h>
main()
{
 int total;
 int sks;
 int mata_kuliah;
 float biaya;
 float biaya_total;

 sks=4;
 mata_kuliah=12;
 biaya=2500;
 total=sks*biaya;
 biaya_total=total*biaya;
 printf("Total SKS = %i\n", total);
 printf("Total Biaya= %f\n", biaya_total);
}