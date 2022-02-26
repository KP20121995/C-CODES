#include<stdio.h>
#include<conio.h>
int main()
{
   int i=1;
   printf("number from 1 to 100 : \n ");
   while (i<=100)
   {
      printf("%d \n",i);
      i=i+1;
      i--;
   }
   getch();
   return 0;
}