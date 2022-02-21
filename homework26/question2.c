#include<stdio.h>
#include<conio.h>
int main()
{
   int num1;
   printf("give the number \n ",num1);
   scanf("%d",&num1);
   if (num1%2==0)
   {
       printf("%d the number is even",num1);
   }
   else
   {
      printf("%d the number is odd",num1);
   }
    getch();
   return 0;
}