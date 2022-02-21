#include<stdio.h>
#include<conio.h>
int main()
{
   float marks;
   printf("the marks of children \n");
   scanf("%f",&marks);
   if (marks>=90)
   {
       printf("%f vanasthali \n",marks);
       if(marks<=95)
       {
          printf("civil \n",marks);
       }
       else if(marks<=98)
       {
         printf("mechanical \n",marks);
       }
       else
       {
            printf("cs \n");
            if(marks==100)
            {
            printf("scholarship 100000 \n",marks);
            }
       }
    }
   else
   {
      printf("%f sharmaji ka beta ko dekh \n",marks);
   }
   getch();
   return 0;
}