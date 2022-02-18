#include<stdio.h>
#include<conio.h>
int main()
{
   float num1,num2,num3,addition,subtraction,multiplication;
   printf("the addition of num1,num2 and num3\n");
   scanf("%f%f%f",&num1,&num2,&num3);
   addition=num1+num2+num3;
   printf("the addition of num1,num2 and num3 =%f\n",addition);
   printf("the subtraction of num1,num2 and num3\n");
   scanf("%f%f%f",&num1,&num2,&num3);
   subtraction=num1-num2-num3;
   printf("the subtraction of num1,num2 and num3 =%f\n",subtraction);
   printf("the multiplication of num1,num2 and num3\n");
   scanf("%f%f%f",&num1,&num2,&num3);
   multiplication=num1*num2*num3;
   printf("the multiplication of num1,num2 and num3=%f\n",multiplication);
   getch();
   return 0;
   }