#include <stdio.h>
int not[5];
float ortalamaHesapla(int not[])
{
    int toplam=0;
    for(int i=0;i<=4;i++)
    {
        toplam+=not[i];
    }
    float ortalama=toplam/5;
    return ortalama;
}

int enBuyukEleman(int not[])
{
    int enBuyuk=not[0];
    for(int i=0;i<=4;i++)
    {
        if(not[i]>enBuyuk)
        {
            enBuyuk=not[i];
        }
    }
    return enBuyuk;
}

int ikinciEnBuyuk(int not[])
{
    int enBuyuk=not[0];
    int ikinciEnBuyuk;
    for(int i=0;i<=4;i++)
    {
        if(not[i]>enBuyuk)
        {
            ikinciEnBuyuk=enBuyuk;
            enBuyuk=not[i];
        }
    }
    return ikinciEnBuyuk;
}

int enKucukEleman(int not[])
{
    int enKucuk=10000;
    for(int i=0;i<=4;i++)
    {
        if(not[i]<enKucuk)
        {
            enKucuk=not[i];
        }
    }
    return enKucuk;
}

int kacKezGecti(int not[],int aranacak)
{
    int sayac=0;
    for(int i=0;i<5;i++)
    {
        if(not[i]==aranacak)
        {
            sayac++;
        }
    }
    return sayac;
}

int ortalamadanBuyuk(int not[])
{
    int sayac=0;
    float ortalama=ortalamaHesapla(not);
    for(int i=0;i<5;i++)
    {
        if(not[i]>ortalama)
        {
            sayac++;
        }
    }
    return sayac;
}

int dahaBuyuklerinToplami(int not[],int sayi)
{
    int toplam=0;
    for(int i=0;i<5;i++)
    {
        if(sayi<not[i])
        {
            toplam+=not[i];
        }
    }
    return toplam;
}

int dahaBuyuklerinOrtalamasi(int not[],int sayi)
{
    int toplam=dahaBuyuklerinToplami(not,sayi);
    int sayac=0;
    for(int i=0;i<5;i++)
    {
        if(sayi<not[i])
        {
            sayac++;
        }
    }
    float ortalama=toplam/sayac;
    return ortalama;
}

int main()
{
    int sayi;
   
    for(int i=0;i<=4;i++)
    {
        printf("%d. Notu giriniz:",i+1);
        scanf("%d",&not[i]);
    }
    printf("Hangi degerden buyuk notlarin toplanmasini istiyorsunuz:");
    int deger;
    scanf("%d",&deger);
    printf("\n==================\nOrtalamaniz:%f",ortalamaHesapla(not));
    printf("\nGirilen en buyuk not:%d",enBuyukEleman(not));
    printf("\nGirilen en buyuk 2. not:%d",ikinciEnBuyuk(not));
    printf("\nGirilen en kucuk not:%d",enKucukEleman(not));
    printf("\nOrtalamadan buyuk olan deger sayisi:%d",ortalamadanBuyuk(not));
    printf("\nGirilen degerden daha buyuk degerlerin toplami:%d",dahaBuyuklerinToplami(not,deger));
    printf("\nGirilen degerden daha buyuk degerlerin ortalamasi:%d",dahaBuyuklerinOrtalamasi(not,deger));

    return 0;
}
