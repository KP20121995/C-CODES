#include<stdio.h>
#include<conio.h>
int main()
{
   float radius,height,volume;
   printf("the radius and height of the cone \n");
   scanf("%f%f",&radius,&height);
   volume=22.0/21.0*radius*radius*height;
   printf("the volume of the cone=%f",volume);
   getch();
   return 0;
   }