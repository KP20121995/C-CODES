#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,i,sum=0;
    printf("enter the first ten natural numbers: \n");
    for(i=1; i<=7; i++)
    {
        printf("%d \t",i);
        sum=sum+i;
    }
    printf("sum=%d \n",sum);
    getch ();    
    return 0;
}