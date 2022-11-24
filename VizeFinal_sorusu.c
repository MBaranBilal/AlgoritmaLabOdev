#include <stdio.h>
int ortalamaVeHarfNotuHesapla(int,int);
int main()
{
    int vize=0,final=0,kod=0;
    while(kod!=111)
    {
        printf("Vize ve final notunuzu sirasiyla giriniz:");
        scanf("%d%d",&vize,&final);
        if(vize==111 && final==111)
        break;

        int ortalama=ortalamaVeHarfNotuHesapla(vize,final);
        
        if(ortalama>85)
        {
            printf("Harf notunuz AA ,ortalamaniz:%d\n",ortalama);
        }
        else if(85>ortalama && ortalama>70)
        {
            printf("Harf notunuz BA ,ortalamaniz:%d\n",ortalama);
        }
        else if(70>ortalama && ortalama>50)
        {
             printf("Harf notunuz BB ,ortalamaniz:%d\n",ortalama);
        }
        else if(50>ortalama && ortalama>40)
        {
             printf("Harf notunuz CB ,ortalamaniz:%d\n",ortalama);
        }
        else
        {
            printf("Harf notunuz DD ,ortalamaniz:%d\n",ortalama);
        }
        printf("Cikis icin 111 giriniz:");
        scanf("%d",&kod);

    }

    return 0;
}
int ortalamaVeHarfNotuHesapla(int vize,int final)
{
    int ortalama=vize*0.6+final*0.4;
    return ortalama;
}
