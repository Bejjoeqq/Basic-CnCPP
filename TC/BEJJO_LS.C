#include <stdio.h>
int main()
{
int luas,alas,tinggi;
clrscr();
printf("Mencari luas segitiga\n----------------------\n\n");
printf("Nilai alas = ");
scanf("%i",&alas);
printf("Nilai tinggi = ");
scanf("%i",&tinggi);
luas=alas * tinggi * 0.5;
printf("Luas segitiga adalah = %i",luas);
getch();
}