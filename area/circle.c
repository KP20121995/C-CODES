#include<stdio.h>
#include<conio.h>
int main()
{
   float radius1,radius2,area;
   printf("the radius1 and radius2 of circle\n");
   scanf("%f%f",&radius1,&radius2);
   area=22.0/7.0*radius1*radius2;
   printf("the area of circle=%f",area);
   getch();
   return 0;
   }