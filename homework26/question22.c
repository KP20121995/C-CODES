#include<stdio.h>
#include<conio.h>
int main()

{
    int n;
    printf("Enter a digit from 1 to 0 n \n");
    scanf("%d", &n);
    if (n<=9)
    {

        if (n==1)
        {
            printf ("one \n");
        }
        else if (n==2)
        {
            printf ("two \n");
        }    
        else if (n==3)
        {
            printf ("three \n");
        }
        else if (n==4)
        {
            printf ("four \n");
        }    
        else if (n==5)
        {
            printf ("five \n");
        } 
        else if (n==6)
        {
            printf ("six \n");
        }    
        else if (n==7)
        {
            printf ("seven \n");
        }    
        else if (n==8)
        {
            printf("eight \n");
        }
        else if (n==9)
        {
            printf("nine \n");
        }
        else if (n==0)
        {
            printf("zero \n");
        }   
        
    }
    else
    {
        printf ("Invalid Entry");
    }    
    getch ();
    return 0;
}