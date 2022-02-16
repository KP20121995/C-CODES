#include<stdio.h>
#include<conio.h>
int main()
{
   float height,radius,volume;
   printf("enter the height and radius of cylinder \n");
   scanf("%f%f",&height,&radius);
   volume=22.0/7.0 *radius*radius/height;
   printf("the volume of cylinder=%f ",volume);
   getch();
   return 0;
}