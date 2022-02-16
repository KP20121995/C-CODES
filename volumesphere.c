#include<stdio.h>
#include<conio.h>
int main()

{
    float radius,volume;
    printf("enter radius of sphere:\n");
    scanf("%f",&radius);
    volume=4.0/3.0*22.0/7.0*radius*radius*radius;
    printf("volume of sphere is %0.3f\n",volume);
    getch ();
    return 0 ;
    
}


