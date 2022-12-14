#include <stdio.h>

float ortalamaHesapla(int vize[],int final[])
{
    float vizeOrt,finalOrt;
    int vizeToplam=0,finalToplam=0;
    for(int i=0;i<5;i++)
    {
        vizeToplam+=vize[i];
    }
    for(int i=0;i<5;i++)
    {
        finalToplam+=final[i];
    }
    vizeOrt=vizeToplam/5;
    finalOrt=finalToplam/5;

    printf("Vizelerin ortalamasi:%f\nFinallerin ortalamasi:%f",vizeOrt,finalOrt);

}

int main()
{
    printf("\n5 adet vize notu giriniz:");
    int vize[5];
    for(int i =0;i<5;i++)
    {
        scanf("%d",&vize[i]);
    }

    printf("5 adet final notu giriniz:");
    int final[5];
    for(int i =0;i<5;i++)
    {
        scanf("%d",&final[i]);
    }

    ortalamaHesapla(vize,final);

    return 0;
}