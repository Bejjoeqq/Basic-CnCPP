#include <stdio.h>
int main()
{
float luas,jari_jari;
const float phi=3.14;
clrscr();
printf("Nilai jari-jari = ");
scanf("%f",&jari_jari);
luas=phi*jari_jari*jari_jari;
printf("Luas lingkaran adalah = %5.2f",luas);
getch();
}