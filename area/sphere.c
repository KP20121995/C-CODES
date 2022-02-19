#include<stdio.h>
#include<conio.h>
int main()
{
    float radius1,radius2,area;
    printf("the radius1 and radius2 of sphere\n");
    scanf("%f%f",&radius1,&radius2);
    area=4*22.0/7.0*radius1*radius2;
    printf("the area of sphere=%f",area);
    getch();
    return 0;


}