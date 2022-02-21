#include<stdio.h>
#include<conio.h>
int main()
{
   char alphabet,specialcharacter;
   int num;
   printf("enter whatever u like \n");
   scanf("%c%c",&alphabet,&specialcharacter);
   scanf("%d",&num);
   if (alphabet=='a' || alphabet=='b'||alphabet== 'c' ||alphabet=='c'||alphabet=='d'||alphabet=='e'||alphabet=='f'||alphabet=='g'||alphabet=='h'||alphabet=='i'||alphabet=='j'||alphabet=='k'||alphabet=='l'||alphabet=='m'||alphabet=='n'||alphabet=='o'||alphabet=='p'||alphabet=='q'||alphabet=='r'||alphabet=='s'||alphabet=='t'||alphabet=='u'||alphabet=='v'||alphabet=='w'||alphabet=='x'||alphabet=='y'||alphabet=='z'||specialcharacter=='!'||specialcharacter=='@'||specialcharacter=='#'||specialcharacter=='$'||specialcharacter=='%'||specialcharacter=='^'||specialcharacter=='&'||specialcharacter=='*'||num=='1'||num=='2'||num=='3'||num=='4'||num=='5'||num=='6'||num=='7'||num=='8'||num=='9'||num=='0' )
   {
       printf("%c%d the like is special \n",alphabet,specialcharacter,num);
   }
   else
   {
      printf("%c%d the like is not special \n",alphabet,specialcharacter,num);
   }
   getch();
   return 0;
}