#include<stdio.h>
#include<conio.h>
int main()
{
   float num1;
   printf(" enter the value \n");
   scanf("%f",&num1);
   if (num1>=0)
   {
       printf("%f the number is positive",num1);
   }
   else
   {
      printf("%f the number is negative",num1);
   }
   getch();
   return 0;
}