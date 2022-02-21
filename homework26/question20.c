#include<stdio.h>
#include<conio.h>
int main()
{
    char n;
    printf("Enter the grade \n");
    scanf("%c", &n);
    if (n=='e' || n=='v' || n=='g' || n=='a' || n=='f')
    {

        if (n=='e')
        {
            printf ("excellent \n");
        }
        else if (n=='v')
        {
            printf ("very good \n");
        }    
        else if (n=='g')
        {
            printf ("good \n");
        }
        else if (n=='a')
        {
            printf ("average \n");
        }    
        else if (n=='f')
        {
            printf ("fail \n");
        }
    }
    else
    {
        printf ("Invalid Entry");
    }    
    getch ();
    return 0;
}