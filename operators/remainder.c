#include<stdio.h>
#include<conio.h>
int main ()
{
   int num1,num2,rem;
   printf("the division of num1 and num2 \n");
   scanf("%d%d",&num1,&num2);
   rem=num1%num2;
   printf("remainder =%d",rem);
   getch();
   return 0 ;
}
