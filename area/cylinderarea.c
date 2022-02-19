#include<stdio.h>
#include<conio.h>
int main()
{
   float radius,height,area1,area2,tsa;
   printf("enter the radius and radius of the cylinder\n");
   scanf("%f",&radius);
   area1=2*22.0/7.0*radius*radius;
   printf("the area1 of cylinder=%f \n",area1);
   printf("enter the radius and height of the cylinder\n");
   scanf("%f%f",&radius,&height);
   area2=2*22.0/7.0*radius*height;
   printf("the area1 of cylinder=%f \n",area2);
   tsa=area1+area2;
   printf("the tsa of cylinder=%f",tsa);
   getch();
   return 0;
   }