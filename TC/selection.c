#include<stdio.h>
#define n 7
int X,i,j,k;
int A[n]={40,2,1,4,15,8,22};
void main()
{
clrscr();
printf("\n Sebelum di sort:");
for(i=0;i<n;i++)
{
 printf("%i  ",A[i]);
}
k=0;
j=k;
i=k+1;
while(k<=n-2)
{
	j=k;
	i=k+1;
	while(i<=n-1)
	{
	  if(A[i]<A[j]) j=i;
	  i++;
	}
	X=A[j];
	A[j]=A[k];
	A[k]=X;
	k++;
}
printf("\n Sesudah di Selection Sort:");
for(i=0;i<n;i++)
{ printf("%i   ",A[i]);}
getch();
}