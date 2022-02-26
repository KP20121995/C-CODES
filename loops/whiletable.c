#include<stdio.h>
#include<conio.h>
int main()
{
   int num,i=0;
   printf("enter a number \n");
   scanf("%d",&num);
   while (i<=10)
   {
      printf("%2dx%2d=%2d \n",i, num,num*i);
      i++;
   }
   getch();
   return 0;
}