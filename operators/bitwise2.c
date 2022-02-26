#include<stdio.h>
#include<conio.h>
int main()
{
   int num1,num2,result;
   printf(" enter 2 values \n");
   scanf("%d%d",&num1,&num2);
   result=(num1|num2);
   printf(" the result=%d",result);
   getch();
   return 0;
   }
