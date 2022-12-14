#include <stdio.h>

void sirala(int sayilar[])
{
    int yedek;
    for(int i=1;i<=4;i++)
    {
        for(int i=0;i<5;i++)
      {
        if(sayilar[i]>sayilar[i+1])
        {
            yedek=sayilar[i];
            sayilar[i]=sayilar[i+1];
            sayilar[i+1]=yedek;
        }
      }
    } 
}

int main()
{

    printf("5 adet sayi giriniz:");
    int sayilar[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&sayilar[i]);
    }

    sirala(sayilar);

    printf("Girilen sayilarin siralanmis hali:");
    for(int i=0;i<5;i++)
    {
        printf("%d ",sayilar[i]);
    }

    



    return 0;
}