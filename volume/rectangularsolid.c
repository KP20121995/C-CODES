#include<stdio.h>
#include<conio.h>
int main()
{
    float length,breath,height,volume;
    printf("the length,breath and height of rectangularsolid ");
    scanf("%f%f%f",&length,&breath,&height);
    volume = length*height*breath;
    printf("the volume of rectangularsolid=%f",volume);
    getch();
    return 0;
    }