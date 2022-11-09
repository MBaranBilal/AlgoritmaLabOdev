#include <stdio.h>

int main()
{
    printf("4 basamakli bir sayi giriniz: ");
    int sayi,birler,onlar,yuzler,binler;
    scanf("%d",&sayi);
    birler=sayi%10;
    onlar=(sayi%100-birler)/10;
    yuzler=(sayi%1000-onlar*10-birler)/100;
    binler=(sayi-yuzler*100-onlar*10-birler)/1000;
    printf("Birler=%d\n Onlar=%d\n Yuzler=%d\n Binler=%d\n",birler,onlar,yuzler,binler);


    if((binler*10+yuzler)*(onlar*10+birler)==(yuzler*10+binler)*(birler*10+onlar))
    {
        printf("Girilen sayi tersyuz sayidir.");
    }
    else
    {
        printf("Girilen sayi tersyuz sayi DEGILDIR.");
    }








    return ;
}