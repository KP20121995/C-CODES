#include<stdio.h>
#include<conio.h>
int main()
{
   float angle1,angle2,angle3,totalangle;
   printf("the angles of triangle \n");
   scanf("%f%f%f",&angle1,&angle2,&angle3);
   totalangle=angle1+angle2+angle3;
   printf("the total angle of triangle=%f \n",totalangle);
   if (totalangle>=180)
   {
       printf("%f the triangle is valid \n",totalangle);
   }
   else
   {
      printf("%f the triangle is not valid \n",totalangle);
   }
   getch();
   return 0;
}