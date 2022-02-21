#include<stdio.h>
#include<conio.h>
int main()
{
   float marks;
   int num1=50,num2=80 ;
   printf(" marks toh bata :\n");
   scanf("%f",&marks);
   if (marks>=num1 && marks<=num2)
   {
       printf("%f good job sharmaji ke beta ko mat dekh",marks);
   }



   getch();
   return 0;
}