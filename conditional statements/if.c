#include<stdio.h>
#include<conio.h>
int main()
{
   float age;
   printf("the voting age of person");
   scanf("%f",&age);
   if (age<=18)
   {
       printf("%f voting eligible",age);
   }
   getch();
   return 0;
}