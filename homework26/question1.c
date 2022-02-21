#include<stdio.h>
#include<conio.h>
int main()
{
   float num1,num2;
   printf("give the 2 value of number \n ");
   scanf("%f%f",&num1,&num2);
   if (num1==num2)
   {
       printf("%f they are equal \n",num1,num2);
   }
   getch();
   return 0;
}