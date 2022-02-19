#include<stdio.h>
#include<conio.h>
int main ()
{
  int length,breath,area;
  printf("the length and breath of rectangle\n");
  scanf("%d%d",&length,&breath);
  area=length*breath;
  printf("the area of rectangle=%d", area);
  getch();
  return 0 ;
}