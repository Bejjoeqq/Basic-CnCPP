/*Program enkripsi file dengan Caesar Cipher */

#include <stdio.h>
main (char *argv[])

{
  FILE *Fin, *Fout;
  char p, c;
  int k;

  Fin = fopen(argv[1], "rb");
  if (Fin == NULL)
     printf ("Kesalahan dalam membuka %s sebagai berkas masukan /n", argv[1]);
       Fout =fopen(argv[2], "wb");
       printf ("\nEnkripsi %s menjadi %s ....\n", argv[1], argv[2]);
       printf("\n");
       printf("k : ");
       scanf("%d", &k);
       while ((p=getc(Fin)) != EOF)

       {
	c=(p+k) % 256;
	putc(c, Fout);
       }

       fclose(Fin);
       fclose(Fout);
}