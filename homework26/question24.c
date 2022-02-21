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
            printf ("january=31days \n");
        }
        else if (n==2)
        {
            printf ("febuary=28days \n");
        }    
        else if (n==3)
        {
            printf ("march=31days \n");
        }
        else if (n==4)
        {
            printf ("april=30days \n");
        }    
        else if (n==5)
        {
            printf ("may=31days \n");
        } 
        else if (n==6)
        {
            printf ("june=30days \n");
        }    
        else if (n==7)
        {
            printf ("july=31days \n");
        }    
        else if (n==8)
        {
            printf("august=30days \n");
        }
        else if (n==9)
        {
            printf("september=31days \n");
        }
        else if (n==10)
        {
            printf("october=30days \n");
        }   
        else if (n==11)
        {
            ("november=31days \n");
        }
        else if (n==12)
        {
            ("december=30days \n");
        }     
    }
    else
    {
        printf ("Invalid Entry");
    }    
    getch ();
    return 0;
}