                            /*program to print first N odd natural number by Recursion*/

#include<stdio.h>
#include<conio.h>
void print(int);
void main()
{
   int N;
   printf("Enter the number upto which you want to check\n");
   scanf("%d",&N);
   //print(2*N-1);
   N=N*2-1;
   print(N);
   getch();
}
void print(int N)
{
    if(N>=1)
    {
      print(N-2);
      printf("%d\n",N);
    }
}
