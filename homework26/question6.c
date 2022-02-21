#include<stdio.h>
#include<conio.h>
int main()
{
   int num1;
   printf(" enter the digit \n");
   scanf("%d",&num1);
   if (num1>0)
   {
       printf("%d 1 \n ",num1);
   }
    else if (num1==0)
    {
       printf("%d 0 \n ",num1);
    }
   else
   {
      printf("%d -1 \n",num1);
   }
   getch();
   return 0;
}