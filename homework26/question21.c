#include<stdio.h>
#include<conio.h>
int main()

{
    int n;
    printf("Enter a number from 1 to 7 n \n");
    scanf("%d", &n);
    if (n<=7)
    {

        if (n==1)
        {
            printf ("monday \n");
        }
        else if (n==2)
        {
            printf ("tuesday \n");
        }    
        else if (n==3)
        {
            printf ("wednesday \n");
        }
        else if (n==4)
        {
            printf ("thrusday \n");
        }    
        else if (n==5)
        {
            printf ("friday \n");
        } 
        else if (n==6)
        {
            printf ("saturday \n");
        }    
        else if (n==7)
        {
            printf ("sunday \n");
        }    
    }
    else
    {
        printf ("Invalid Entry");
    }    
    getch ();
    return 0;
}