#include<stdio.h>
#include<conio.h>
int main()
{
    float base, height, area;
    printf("the base and height of the parallelogram");
    scanf("%f%f",&base,&height);
    area=1.0/2.0*base*height;
    printf("the area of parallelogram=%f",area);
    getch();
    return 0;
}