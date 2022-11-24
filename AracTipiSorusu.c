#include <stdio.h>
int main()
{
    //Arac tipi
    /*char tip;
    int gun,km;
    printf("Arac tipi giriniz:\n(A veya a Arazi)\n(B veya b Binek)\n(S veya s Station)\n(P veya p Spor):");
    scanf("%c",&tip);
    switch(tip)
    {
        case 'A':
        case 'a':
        printf("Gun ve km bilgisi:");
        scanf("%d%d",&gun,&km);
        printf("Toplam borc:%d",gun*20+km*18);
        break;

        case 'B':
        case 'b':
        printf("Gun ve km bilgisi:");
        scanf("%d%d",&gun,&km);
        printf("Toplam borc:%d",gun*32+km*22);
        break;

        case 'S':
        case 's':
        printf("Gun ve km bilgisi:");
        scanf("%d%d",&gun,&km);
        printf("Toplam borc:%d",gun*43+km*28);
        break;

        case 'P':
        case 'p':
        printf("Gun ve km bilgisi:");
        scanf("%d%d",&gun,&km);
        printf("Toplam borc:%d",gun*51+km*36);
        break;

        default:
        printf("Yanlis arac tipi girdiniz");
    }*/

     int sayacR=0,sayacM=0,sayacH=0,sayacF=0;
     float tutar,toplamR=0,toplamM=0,toplamH=0,toplamF=0;
     int marka=1;
     float enBuyuk=0;
     int enCokGelen=0;
     while(marka!=111)
     {
        printf("Marka,tutar giriniz:");
        scanf("%d%f",&marka,&tutar);
        switch(marka)
        {
            case 1:
            toplamR+=tutar;
            sayacR++;
            break;

            case 2:
            toplamM+=tutar;
            sayacM++;
            break;

            case 3:
            toplamH+=tutar;
            sayacH++;
            break;

            case 4:
            toplamF+=tutar;
            sayacF++;
            break;
        }
        if(toplamR>enBuyuk)
        {
            enBuyuk=toplamR;
        }
        else if(toplamM>enBuyuk)
        {
            enBuyuk=toplamM;
        }
         else if(toplamH>enBuyuk)
        {
            enBuyuk=toplamH;
        }
         else if(toplamF>enBuyuk)
        {
            enBuyuk=toplamF;
        }

        if(sayacR>enCokGelen)
        {
            enCokGelen=sayacR;
        }
        else if(sayacF>enCokGelen)
        {
            enCokGelen=sayacF;
        }
         else if(sayacM>enCokGelen)
        {
            enCokGelen=sayacM;
        }
         else if(sayacH>enCokGelen)
        {
            enCokGelen=sayacH;
        }
     }
    printf("En cok gelen aracin gelis sayisi:%d\nEn buyuk tutar:%f",enCokGelen,enBuyuk);





    return 0;
}
