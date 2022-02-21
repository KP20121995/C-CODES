#include<stdio.h>
#include<conio.h>
int main()
{
   float angle1,angle2,angle3;
   printf("enter the 3 angles \n");
   scanf("%f%f%f",&angle1,&angle2,&angle3);
   if (angle1==angle2 && angle1==angle3 && angle2==angle3)
   {
       printf("%f the triangle is equilateral",angle1,angle2,angle3);
   }
   else if (angle1==angle2 && angle1!=angle3 && angle2!=angle3)
    {
       printf("%f the triangle is isoceles",angle1,angle2,angle3);
    }
    else
    {
       printf("%f the triangle is scalene",angle1,angle2,angle3);
    }
   getch();
   return 0;
}