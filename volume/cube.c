#include<stdio.h>
#include<conio.h>
int main()
{
   float side,volume;
   printf("the side of the cube");
   scanf("%f",&side);
   volume=side*side*side;
   printf("the volume of cube=%f",volume);
   getch();
   return 0;
}
