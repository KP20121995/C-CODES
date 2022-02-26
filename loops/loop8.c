#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,i,sum=0,average=0;
    printf("enter odd numbers: \n");
    for(i=1; i<=100; i++)
    {
        
        if(i%2!=0)
        {
            printf("%d \t",i);
            sum=sum+i;
            average=sum/i;
        }
    }
    printf("sum=%d \n",sum);
    printf("average=%d",average);
    getch ();    
    return 0;
}
