#include<stdio.h>
#include<conio.h>
int main()
{
   float fehrenheit,celcius;
   printf("the celcius of the formula ");
   scanf("%f",&celcius);
   fehrenheit=(celcius*5.0/9.0)+32;
   printf("the fehrenheit=%f",fehrenheit);
   getch();
   return 0;
   }