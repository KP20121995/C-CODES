#include <stdio.h>
#include<conio.h> 
int main()
{
    float num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("num1 = %f,num2 = %f,num3 = %f\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
    {
        printf("num2 is the greatest among three \n");
    }
    else
    {
        printf("num3 is the greatest among three \n");
    }    
getch();
return 0 ;
}