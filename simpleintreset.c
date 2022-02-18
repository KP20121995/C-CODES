#include<stdio.h>
#include<conio.h>
int main()
{
  float principle,time,rate,simpleintreset;
  printf("the principle,time,rate\n");
  scanf("%f%f%f",&principle,&time,&rate);
  simpleintreset = principle*time*rate/100;
  printf("the simpleintreset=%f",simpleintreset);
  getch();
  return 0;
  }