#include <stdio.h>
#include <conio.h>

void persegipanjang()
{
 char c;
 int pj,lb,luas;
 clrscr();

 gotoxy(5,5);printf("Menghitung Luas Persegi Panjang");
 gotoxy(5,6);printf("-------------------------------");
 gotoxy(5,7);printf("Panjang             :");
 gotoxy(5,8);printf("Lebar               :");
 gotoxy(5,9);printf("Luas                :");
 gotoxy(5,10);printf("-------------------------------");
 gotoxy(27,7);scanf("%i",&pj);
 gotoxy(27,8);scanf("%i",&lb);
 luas=pj*lb;
 gotoxy(27,9);printf("%i",luas);
 getch();
 }

 void segitiga()
 {
  char c;
  int pj,tg,luas;
  clrscr();

  gotoxy(5,5);printf("Menghitung Luas Segitiga");
  gotoxy(5,6);printf("-----------------------------");
  gotoxy(5,7);printf("Panjang           :");
  gotoxy(5,8);printf("Tinggi            :");
  gotoxy(5,9);printf("Luas              :");
  gotoxy(5,10);printf("-----------------------------");
  gotoxy(27,7);scanf("%i",&pj);
  gotoxy(27,8);scanf("%i",&tg);
  luas=0.5*pj*tg;
  gotoxy(27,9);printf("%i",luas);
  getch();
  }

  void main()
  {
   int p;
   do
   {
   clrscr();

   gotoxy(10,5);printf("            MENU PROGRAM           ");
   gotoxy(10,6);printf("-----------------------------------");
   gotoxy(10,7);printf("[1] Luas Segi Panjang              ");
   gotoxy(10,8);printf("[2] Luas Segitiga                  ");
   gotoxy(10,9);printf("[0] Selesai                        ");
   gotoxy(10,10);printf("----------------------------------");
   p=3;
   while(p>2)
   {
     gotoxy(10,11);printf("Pilihan :  ");
     scanf("%i",&p);
   }
   if(p==1)
   {
   persegipanjang();
   }
    else if (p==2)
    {
     segitiga();
    }
    }
    while(p!=0);
}
