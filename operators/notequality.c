#include<stdio.h>
#include<conio.h>
int main()
{
   float num1,num2,result;
   printf(" enter 2 values \n");
   scanf("%f%f",&num1,&num2);
   result=num1!=num2;
   printf(" the result=%f",result);
   getch();
   return 0;
   }