#include <stdio.h>
int main()
{
    //Girilen satır sayısına göre ikizkenar üçgen
   int giris;
   printf("Giris:");
   scanf("%d",&giris);
   int bosluk=giris-1;
   int yildiz=1;
   for(int i=1;i<=giris;i++)
   {
       for(int k=1;k<=bosluk;k++)
       {
        printf(" ");
       }
       bosluk--;
       for(int k=1;k<=yildiz;k++)
       {
        printf("*");
       }
       yildiz+=2;
       printf("\n");
   }
    return 0;
}