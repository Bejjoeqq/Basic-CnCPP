#include<stdio.h>
#include<stdlib.h>
void main()
{
 int x;
 int ran1,ran2;
 rand();
 ran1=rand()%4+1;
 ran2=rand()%4+1;
 printf(" %i",ran1,ran2);
 getch();
}
