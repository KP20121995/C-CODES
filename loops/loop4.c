#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,i,sum=0,average=0;
    printf("enter the first ten natural numbers: \n");
    for(i=1; i<=10; i++)
    {
        printf("%d \n",i);
        sum=sum+i;
        average=sum/i;
    }
    printf("sum=%d \n",sum);
    printf("average=%d \n",average);
    getch ();    
    return 0;
}