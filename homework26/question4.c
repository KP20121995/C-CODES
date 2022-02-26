#include<stdio.h>
#include<conio.h>
int main()
{
   int year;
   printf("ENTER THE YEAR :");
   scanf("%d",&year);
   if (year%4==0 && year%100!=0 || year%400==0)
   {
       printf("THE  YEAR IS LEAP YEAR",year);
   }
   else
   {
       printf("THE YEAR IS NOT YEAR ",year);
   }
   getch();
   return 0;
}