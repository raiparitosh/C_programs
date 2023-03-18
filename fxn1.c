                                /*fxn to print first N natural number(TSRN)*/

#include<stdio.h>
#include<conio.h>
void print(int);
void main()
{
 int n;
 printf("enter number");
 scanf("%d",&n);
 print(n);
}
void print(int x)
{
 int i;
  for(i=1;i<=x;i++)
  {
   printf("%d\n",i);
  }
 getch();
}
