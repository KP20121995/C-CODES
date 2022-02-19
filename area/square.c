#include<stdio.h>
#include<conio.h>
int main()
{
   int side1,side2,area;
   printf("the side1 and side2 of the square \n");
   scanf("%d%d",&side1,&side2);
   area=side1*side2;
   printf("the area of sqaure=%d",area);
   getch();
   return 0;
}