#include<stdio.h>
#include<conio.h>
int main()
{
   char alphabet;
   printf("enter the alphabet \n");
   scanf("%c",&alphabet);
   if (alphabet=='a' || alphabet=='e'||alphabet== 'i' ||alphabet=='o'||alphabet=='u' )
   {
       printf("%c the alphabet is vowel \n",alphabet);
   }
   else
   {
      printf("%c the alphabet is consonant \n",alphabet);
   }
   getch();
   return 0;
}