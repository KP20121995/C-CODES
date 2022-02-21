#include<stdio.h>
#include<conio.h>
int main()
{
   float num1,num2,result;
   printf("enter the value \n");
   scanf("%f%f",&num1,&num2);
   result=num1-num2;
   printf("the result of numbers entered=%f \n",result);
   if (result>0)
   {
       printf("%f profit \n",result);
   }
   else
   {
      printf("%f loss \n ",result);
   }
   getch();
   return 0;
}