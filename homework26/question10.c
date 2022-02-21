#include<stdio.h>
#include<conio.h>
int main()
{
   float marksmaths , markschem , marksphy,totalmarks,totalmarksmathsandphy;
   printf("enter the marks \n");
   scanf("%f%f%f",&marksmaths,&markschem,&marksphy);
   totalmarks=markschem+marksmaths+marksphy;
   printf("totalmarks=%f \n",totalmarks);
   totalmarksmathsandphy=marksmaths+marksphy;
   printf("totatotalmarksmathsandphy=%f \n",totalmarksmathsandphy);
   if(totalmarks>=190 || totalmarksmathsandphy>=140)
   {
     printf("the person is not addmitted=%f \n",totalmarks,totalmarksmathsandphy);
     if (marksmaths>=65)
     {
        printf("the maths marks not accepted=%f \n",marksmaths);
     }
     if (markschem>=50)
     {
        printf("the chem marks not accepted=%f \n",markschem);
     }
     else if (marksphy>=55)
     {
        printf("the phy marks not accepted=%f \n",marksphy);
     }
     else
     {
        printf("the student is good=%f \n");
     }
   }
   else
   {
      printf("the student is  admitted");
   }
   
   getch();
   return 0;




}