#include<stdio.h>
#include<conio.h>
#define n 3
void main()
{
 char chg,chg1,taking,taker='m';
 char Queue[n]={'w','s','c'};
 char desti[n]={'','',''};
 int acak,i;
 clrscr();
 ulang1:
 srand(time(NULL));/*fungsi random*/
 rand();
 acak=rand()%3+0;/*random sebanyak 3 jenis*/
 if(acak==0) goto ulang1;
 printf("\n langkah 1");
 printf("\n origin : %c",taker);
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:");
 printf("\n Boat @ destination:");
 printf("\n destination:");

 taking=Queue[acak];
 Queue[acak]='';
 printf("\n langkah 2");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:%c %c",taker,taking);
 printf("\n Boat @ destination:");
 printf("\n destination:");

 printf("\n langkah 3");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:");
 printf("\n Boat @ destination:%c %c",taker,taking);
 printf("\n destination:");

 printf("\n langkah 4");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:");
 printf("\n Boat @ destination:%c",taker);
 desti[0]=taking;
 printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 5");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: %c",taker);
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

ulang:
srand(time(NULL));
rand();
acak=rand()%3+0;
if(Queue[acak]=='') goto ulang;
else{
	taking=Queue[acak];
	Queue[acak]=''; /*yang lama harus dihapus logikanya*/
}
printf("\n langkah 6");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: %c %c",taker,taking);
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 7");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 printf("\n Boat @ destination:%c %c",taker,taking);
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 8");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 if(desti[0]=='s' && taking=='w')
 {
	chg=desti[0];
	desti[0]=taking;
	taking=chg;	
 }
 else if(desti[0]=='s' && taking=='c')
 {
	chg=desti[0];
	desti[0]=taking;
	taking=chg;
		
  }
 else if(desti[0]=='c' && taking=='w')
 {
	desti[1]=taking;
	taking='';	
  }
 else if(desti[0]=='c' && taking=='s')
 {
	chg=desti[0];
	desti[0]=taking;
	taking=chg;	
  }
 printf("\n Boat @ destination:%c %c ",taker,taking);
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 9");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: %c %c",taker,taking);
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 10");
if(taking=='')
{
	 for(i=0;i<n;i++)
	 {
		if(Queue[i]!='') 
		 {taking=Queue[i];
		 Queue[i]='';
	         }
	 }

}
else{ if(taking=='S')
  	for(i=0;i<n;i++)
	 {
		if(Queue[i]=='C') 
		 {
		  chg1=taking;
                  taking=Queue[i];
		  Queue[i]='';	
	         }
	}
	
} 
printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: %c %c",taker,taking);
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 11");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 printf("\n Boat @ destination:%c %c",taker,taking);
  printf("\n destination:");
 for(i=0;i<n;i++)
 printf("%c",desti[i]);

printf("\n langkah 12");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 desti[1]=taking;
 taking='';
 printf("\n Boat @ destination:%c %c",taker,taking);
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);
   

printf("\n langkah 13");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:%c %c",taker,taking );
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 14");
for(i=0;i<n;i++)
  {
	if(Queue[i]!='') 
		 {taking=Queue[i];
		 Queue[i]='';
	         }
  
  }
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin:%c %c",taker,taking );
 printf("\n Boat @ destination:");
  printf("\n destination:");
 for(i=0;i<n;i++)
    printf("%c",desti[i]);

printf("\n langkah 15");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 printf("\n Boat @ destination:%c %c",taker,taking);
  printf("\n destination:");
 for(i=0;i<n;i++)
 printf("%c",desti[i]);

printf("\n langkah 16");
 printf("\n origin:");
 for(i=0;i<n;i++)
    printf("%c",Queue[i]);
 printf("\n Boat @ origin: ");
 printf("\n Boat @ destination:");
desti[2]=taking;
taking='';
  printf("\n destination:%c", taker);
 for(i=0;i<n;i++)
 {printf("%c",desti[i]);}
 getch();/*berhenti*/
}