#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a digit to get month \n");
    scanf("%d", &n);
    if (n<=12)
    {

        if (n==1)
        {
            printf ("january \n");
        }
        else if (n==2)
        {
            printf ("febuary \n");
        }    
        else if (n==3)
        {
            printf ("march \n");
        }
        else if (n==4)
        {
            printf ("april \n");
        }    
        else if (n==5)
        {
            printf ("may \n");
        } 
        else if (n==6)
        {
            printf ("june \n");
        }    
        else if (n==7)
        {
            printf ("july \n");
        }    
        else if (n==8)
        {
            printf("august \n");
        }
        else if (n==9)
        {
            printf("september \n");
        }
        else if (n==10)
        {
            printf("october \n");
        }   
        else if (n==11)
        {
            ("november \n");
        }
        else if (n==12)
        {
            ("december \n");
        }     
    }
    else
    {
        printf ("Invalid Entry");
    }    
    getch ();
    return 0;
}