#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,i,cube=0;
    printf("enter the first ten natural numbers: \n");
    for(i=1; i<=10; i++)
    {
        cube=i*i*i;
        printf("%d \t",cube);
    }
    getch ();    
    return 0;
}