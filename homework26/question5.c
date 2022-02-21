#include<stdio.h>
#include<conio.h>
int main()
{
   float age;
   printf("the voting age of person \n");
   scanf("%f",&age);
   if (age>=18)
   {
       printf("%f voting eligible",age);
   }
   else
   {
      printf("%f not ready to vote",age);
   }
   getch();
   return 0;
}